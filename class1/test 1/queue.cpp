
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    vector<int> v(n);
    queue<int> q;
    int num;
    for (int i = 0; i < n; i++) {cin >> num; q.push(num); }
    for (int i = 0; i < n; i++) cin >> v[i];
    long long res = n; //
    for (int i = 0; i < n; i++) {
        while (v[i] != q.front()) {
            int temp = q.front(); 
            q.pop();
            q.push(temp);
            res = res+1;
        }
        q.pop();
    }
    cout<<res;

    return 0;
}