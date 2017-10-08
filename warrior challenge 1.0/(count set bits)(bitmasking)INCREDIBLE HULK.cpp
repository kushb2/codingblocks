//kush

#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n) {
    // method we are using is
    // n & (n-1) which uset the last set bits
    int ans = 0;
    while (n) {
        n = n & (n - 1);
        ans++;
    }
    return ans;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    int tc, n;
    cin >> tc;
    while (tc--) {
        cin >> n;
        cout << countSetBits(n) << endl;
    }

    return 0;
}