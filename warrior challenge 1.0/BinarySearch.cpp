//kush

#include <bits/stdc++.h>
using namespace std;

int search(std::vector<int> arr, int start, int end, int key){
    while(start <= end){
        int mid = (start + end)>>1;
        if(arr[mid] == key) return mid;
        if(key > arr[mid]) start = mid+1;
        else end = mid - 1; 
    }
    return -1;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    int n; cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int m; cin >> m;
    cout<<search(v,0,v.size()-1,m);
    return 0;
}