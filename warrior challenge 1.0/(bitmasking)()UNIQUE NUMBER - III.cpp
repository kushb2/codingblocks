//kush

#include <bits/stdc++.h>
using namespace std;


int GetNo(std::vector<int>  v) {
    // 1 1 1 2 2 2 3
    // take  sum for all number in array v's ith bit
    int res = 0;
    long long  pow = 1; // can be very large
    // had to check weather number is 32 bit or 64 bit format
    for (int i = 0; i < 32; i++) {
        int temp = 0;
        for (int j = 0; j < v.size(); j++) {
            if ( (v[j] & (1 << i))) {
                temp++;
            }
        }
        // sum temp for ith bit set for how many values
        res += (temp % 3) * pow; // create binary to deciaml
             cout << i <<" "<< temp <<" "<< res << endl;
             pow *=2;
    }
    return res;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    int n; cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    cout << GetNo(v);
    return 0;
}