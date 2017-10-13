//kush

#include <bits/stdc++.h>
using namespace std;


int main() {
  
    string s; cin >> s;
    int i = 0;
    if(s[i] == '9') i++;
    for(;i<s.length();i++){
        int  digit = s[i] - '0';
        if(digit > 9-digit) {
            s[i] = '0' + 9-digit;
        }
    }
  
    cout << s;
    return 0;
}