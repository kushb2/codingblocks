//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    int arr[n + 1][n + 1];
memset(arr,0,sizeof(arr));
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0) {
                arr[i][j] = 1;
            }
            else {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
        cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }


}