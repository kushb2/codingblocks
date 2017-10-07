#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b){
   // cout<<a<<" "<<b<<endl;
    //21 1
    if( a<b) return true;
    return false;
}

int main() {
    std::vector<int> v = {1, 20, 5, 7, 34};
     sort(v.begin(), v.end(),comp);
    // auto it1 =  binary_search(v.begin(),v.end(),5); //  reurn bool
    // auto it2 =  find(v.begin(),v.end(),5) - v.begin(); // indx where find
    //auto it3 = lower_bound(v.begin(), v.end(),6);
    //auto it4 = upper_bound(v.begin(), v.end(),7);
    //cout<<*it4;

   
    for (auto it : v) cout << it << " ";
    return 0;
}