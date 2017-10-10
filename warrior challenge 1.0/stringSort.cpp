//kush

#include <bits/stdc++.h>
using namespace std;


bool comp1(string a, string b){
    return a < b;
}


bool comp(string a, string b){
    // higher length or lexographical 
    int n = a.length(); int m = b.length();
    int i, j; i = j = 0;


    while(i < n && j < m){
        if(a[i] > b[j]) return false;
        else if(a[i] < b[j]) return true;
        i++; j++;
    }

    // if length is not equal 
    // can check at satrting as well
    return n > m;    
}

int main() {
     ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    std::vector<string> lst(n);
    string temp;
    for(int i=0;i<n;i++){
        cin>>lst[i];
    }

    // sort the list of string
    sort(lst.begin(), lst.end(),comp1);
    for(auto i : lst) cout<<i<<endl;

    return 0;
}

/* problem statment
STRING SORT
Nishant is very naughty boy in Launchpad Batch. One day he was playing with strings, and randomly shuffled them all. Your task is to help Nishant Sort all the strings ( lexicographically ) but if two strings have a common part, then string with longer length should come first. Eg bat ,batman are 2 strings have common part as bat - then sorted order should have - batman, bat.


Input Format:
N(integer) followed by N strings.

Constraints:
N<=1000
Output Format:
N lines each containing one string.

Sample Input:
3
bat
apple
batman
Sample Output:
apple
batman
bat
*/









