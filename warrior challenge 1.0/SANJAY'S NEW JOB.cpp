//kush

#include <bits/stdc++.h>
using namespace std;
typedef pair<string, int> pp;
typedef std::vector<pp> v;

bool comp(pp a, pp b) {
    if (a.second > b.second) return true;
    else if (a.second < b.second) return false;

    int i, j; i = j = 0;
    int n = a.first.length();
    int m = b.first.length();
    string s1 = a.first;
    string s2 = b.first;
    while (i < n && j < m) {
        if (s1[i] > s2[j]) return false;
        if (s1[i] < s2[j]) return true;
        i++; j++;
    }
    return n > m;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    int x, n;
    cin >> x >> n;
    v arr;
    pp p;
    for (int i = 0; i < n; i++) {
        cin >> p.first;
        cin >> p.second;
        if (p.second < x) continue;
        arr.push_back(p);
    }

    sort(arr.begin(), arr.end(), comp);
    for (auto i : arr) cout << i.first << " " << i.second << endl;
    return 0;
}