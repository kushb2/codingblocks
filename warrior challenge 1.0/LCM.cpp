//kush

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef std::vector<ll> vec;

vec findFactor(int n) {
    vec res;
    /*
    i <- 1 to n
    // but as we know there is no factor greator then n/2
    i <- 1 to n/2
    // if we can get a all factor at sqrt(n) then no either 1 or a prime
    */
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            res.push_back(i);
            n = n / i;
        }
    }
    if (n != 0) res.push_back(n);
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
    for (auto i : v1) cout << i << " ";
    cout << endl;
    for (auto i : v2) cout << i << " ";
    cout << endl;
    int i, j; i = j = 0;
    while (i < v1.size() && j < v2.size()) {
        if (v1[i] == v2[j]) res *= v1[i];
        else res  = res * v1[i] * v2[j];
        i++; j++;
    }

    while (i < v1.size()) res *= v1[i++];
    while (j < v2.size()) res *= v2[j++];
    cout << res;
    }
    return 0;
}