//kush

#include <bits/stdc++.h>
using namespace std;

int GetSetBitIndx(int n) {
    int index = 0;
    while (n) {
        if (n & 1) return index;
        index++;
        n = n >> index;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    int n; cin >> n;
    std::vector<int> v(n);

    int xorAll = 0;
    for (int i = 0; i < n ; i++) {
        cin >> v[i];
        xorAll ^= v[i];
    }

    int index = GetSetBitIndx(xorAll);
    int xorset = 0;
    int xorUnset = 0;
    for(int i=0;i<n;i++){
        if(v[i] & 1<<index) xorset ^= v[i];
        else xorUnset ^= v[i];
    }

    cout<<min(xorUnset,xorset)<<" "<<max(xorset,xorUnset)<<endl;

    return 0;
}