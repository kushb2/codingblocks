//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <bits/stdc++.h>
using namespace std;

int getmod(string s ,int  n){
    //1234

    int res = 0;
    for(int i=0;i < s.length();i++){
        res = ((int)s[i] - '0' + res*10)%n;
    }
    return res%n;
}

int gcd(int a,int b){
    if(a == 0) return b;
   return gcd(b%a,a);
}

int main(){
    string str = "12316767678678";
    int n = 10;
   //cin>>n>>str;
   
   cout<<gcd(getmod(str,n),n);     
}