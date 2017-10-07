
#include <bits/stdc++.h>
using namespace std;
const long long int MOD = 1000000007;
int main() {
    int n, r; cin >> n >> r;
    long long int res = 1;
    int k = 0;
    int maxx = max(n-r,r);
    int minn = min(n-r,r);
    for (int i = n; i > maxx; --i) {
        res = (res*i)%MOD;
        res = res/(minn-k);
        k++;
    }
    cout<<res;
}