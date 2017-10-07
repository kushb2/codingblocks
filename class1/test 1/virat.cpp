#include <bits/stdc++.h>
using namespace std;


void solve(int *arr,int no,int &index){
    int carry = 0;
    for(int i=0;i<index;i++){
        int mul = arr[i]*no + carry;
        arr[i] = mul%10;
        carry = mul/10;
    }

    while(carry){
        arr[index] = carry%10;
        carry = carry/10;
        index++;
    }


}


int main(){
    int n; cin>>n;
    int *arr = new int[200];
    int index = 1;
    arr[0] = 1;
    for(int i= 2; i<=n; ++i){
        solve(arr,i,index);
    }

    for(int i=index-1;i>=0;--i)cout<<arr[i];


    return 0;
}