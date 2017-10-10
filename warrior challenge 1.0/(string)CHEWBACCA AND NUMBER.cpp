//kush

#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    int t; cin>>t;
    while(t--){
    string s, ans; cin >> s;
    for (int i = 0 ; i < s.length() ; i++) {
        int n = s[i] - '0';
      if(n == 9 || 9-n > n)  cout<<n;
      else cout<<9-n;
    }
    cout<<endl;
}
    return 0;
}