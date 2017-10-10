//kush
/*8
2
33
*/
#include <bits/stdc++.h>
using namespace std;

int changeDecimal(int oldBase, int n){
    int res = 0;
    int pow = 1;
    while(n){
        res += (n%10)*pow;
        n = n/10;
        pow *= oldBase;
    }
    return res;
}


void changeNewBase(int n, int newBase){
    if(n ==0) return;
    
    changeNewBase(n/newBase,newBase);
    cout<<n%newBase;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    int oldBase, newBase, n;
    cin >> oldBase >> newBase >> n;

    // convet oldBase to decimal

    int decimal = changeDecimal(oldBase,n);
    cout<<decimal<<endl;
     changeNewBase(decimal,newBase);
    return 0;
}