#include <bits/stdc++.h>
using namespace std;

bool isInvlid(int n) {
    return n % 5 != 0 ;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 7, 10, 15};
    // remove all elements all
    remove_if(arr, arr + sizeof(arr) / sizeof(int), isInvlid); //  place true return element at first overwrite
    remove(arr, arr + sizeof(arr) / sizeof(int), 1); //  remove from array and add last emlement add in end

    for (auto i : arr) cout << i << " ";
    return 0;
}