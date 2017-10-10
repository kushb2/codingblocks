//kush

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef std::vector<pair<int,int>> vec;

vec findFactor(int n) {
    vec res;
    /*
    i <- 1 to n
    // but as we know there is no factor greator then n/2
    i <- 1 to n/2
    // if we can get a all factor at sqrt(n) then no either 1 or a prime
    */
    for (int i = 2; i <= sqrt(n); i++) {
        int val = 1;
        while (n % i == 0) {
            val *=i;
            n = n / i;
        }
        if(val != 1){
            res.push_back({i,val});
        }
    }
    if (n != 0) res.push_back({n,n});
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    int a, b;
    ll res = 1;
    cin >> a >> b;
    if(a == 0 || b == 0){
        cout<<0;

    }
    else
    {
    vec v1 =  findFactor(a);
    vec v2 = findFactor(b);
   
    int i,j;  i= j = 0;
    while(i < v1.size() && j < v2.size()){
        if(v1[i].first != v2[i].first){
            res = res * v1[i].second * v2[i].second;
        }
        else res = res*max(v1[i].second, v2[i].second);
        i++; j++;
    }

    while(i < v1.size()) res *= v1[i++].second;


    while(j < v2.size()) res *= v2[j++].second;

    cout << res;
    }
    return 0;
}