//kush

#include <bits/stdc++.h>
using namespace std;

int power(int a, int b) {

    // if b == 0  ans is always 1
    if ( b == 0) {
        return 1;
    }

    // recursive part
    if ( b % 2 == 0) { // even power
        int ans = power(a, b / 2);
        ans *= ans;
        return ans;
    }
    else {
        int  ans = power(a, b / 2);

        ans *= ans;
        ans *= a;

    return ans;
    } 
}


int main() {
    int a, b;
    cin >> a >> b;
    cout << power(a, b);
    return 0;
}