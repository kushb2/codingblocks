//kush

#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 10;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    int n; cin >> n;
    std::vector<int> v(MAXN, 0);
    int temp;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        v[temp]++;
    }

    for(int i=0;i<MAXN;i++){
        while(v[i] > 0){
            cout<<i<<" ";
            v[i]--;
        }
    }

    return 0;
}