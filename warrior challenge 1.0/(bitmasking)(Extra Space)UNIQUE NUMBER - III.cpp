//kush

#include <bits/stdc++.h>
using namespace std;


int GetNo(std::vector<int>  v) {
    std::vector<int> bitArray(64, 0);

    // itrate through array
    // make a count of evety ith set bit
    // same number comes thirce for that (ith bit%3) = 0;
    // only ;eft numberis our ans;

    for (int i = 0; i < v.size(); i++) {

        int num = v[i];
        int index = 0;
        while (num) {
            bitArray[index] += num & 1;
            num = num >> 1;
            index++;
        }
    }

    int res = 0;
    int pow = 1;
    // convert binary to decimal
    for (int i = 0; i < 64; i++) {
        bitArray[i] %= 3;
        res += bitArray[i]*pow;
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