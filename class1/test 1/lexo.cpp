#include<bits/stdc++.h>
using namespace std;

bool comp(string a, string b) {
    // should a comes before b
    // if yes return true
    // else return false
    int n, m; n = a.length(); m = b.length();
    int i, j; i = j = 0;

    while (i<n && j<m ) {
        if (a[i] > b[j]) return false;
        else if (a[i] < b[j]) return true;
        i++; j++;
    }
    return n > m;
}

int main() {
    int n; cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end(), comp);
    for (auto i : v) cout << i << "\n";

    return 0;
}