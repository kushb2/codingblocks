/*
Build a programs    : Ctrl + B
Open terminal       : Ctrl + Alt + T
Autoformat code     : Ctrl + Alt + F
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  /* String
  string s =  "hellos";
  string s(10, 'a'); // cretae 10 length of string fill with a
  s3.append("bila");
  cout << s3.find('a') << endl; // return the first index of find string
  cout << s3.length() << endl;// return length
  cout << s3.size() << endl;
  cout<<s.substr(1,2); // subsrt(2) // 2 to end string return
  // subsrt(2,5) // staring 2 nd index return 5 length string
  */

  // Vector
  /*
   vector<int> v = {1, 3, 4, 5}; // length of 10 char fill with 10
   for (auto i : v) cout << i << " ";
   //v.clear(); //  clear the vector
   for (auto i : v) cout << i << " ";
   v.pop_back(); //  pop the last element O(1)
   for (auto i : v) cout << i << " ";
   v.push_back(10);  add elements
   */

  // List
/*
  list<int> lst(5);
  list<int>:: iterator it = lst.end();
  it--;
  for (; it != lst.begin(); it--)
    cout << *it << " ";
  
  lst.push_back(10);
  lst.push_back(20);
  lst.push_front(100);
  lst.pop_back();
  lst.pop_front();
  for (auto i : lst) cout << i << " "; cout << endl;
  */

  // pair
  /*
  pair<int, int> pp;
   //pp.first = 1; pp.second = 2;
   pp = make_pair(10, 0);
   cout << pp.first << " " << pp.second << endl;
  */
// SET

  /*
      set<int> s;
      multiset<int> m;
      s.insert(50);
      s.insert(10);
      s.insert(20);
      s.insert(20);
      for (auto i : s) cout << i << " "; cout << endl;
      cout << s.count(50) << endl; // check for key exists in or not
      m.insert(10);
      m.insert(20);
      m.insert(10);
      for (auto i : m) cout << i << " "; cout << endl;
      cout << m.count(1000) << endl;
      s.erase(20); // erase a value in set
      for (auto i : s) cout << i << " "; cout << endl;
      cout << s.size() << endl;
  */
  // MAPS
  /*
      map<int, int> map; // you can insert using index as well as pair
      map[1] = 10;
      map[2] = 50;
      map[1] = 100;
      map.insert({5, 50});
      map.insert({5, 50});

      for (auto i : map) cout << i.first << " "; cout << endl;
      cout << map.count(1) << endl; //  check for found or not
      multimap<int, int> map1; // have to insert using pair method
      map1.insert({5, 50});
      map1.insert({5, 50});

      for (auto i : map1) cout << i.first << " "; cout << endl;
      cout << map1.count(5); //  check for found or not
    */

  //HEAP
  /*
      priority_queue<int> pq; // max heap
      pq.push(10);
      pq.push(50);
      pq.push(5);
      cout<<pq.size()<<endl;
      cout<<pq.top()<<endl;
      pq.pop();
      cout<<pq.top()<<endl;
  */
  //priority queue
  /*
        priority_queue<int, vector<int> , > pq; // max heap
        pq.push(10);
        pq.push(50);
        pq.push(5);
        cout<<pq.size()<<endl;
        cout<<pq.top()<<endl;
        pq.pop();
        cout<<pq.top()<<endl;
    */
// DEQUE indxing allowed
  /*deque<int> d(10);
  //
  for(auto i : d) cout<<i<<" ";
  d[2] = 50;
  d.push_back(100);
  d.push_front(200);
  d.pop_back();
  d.pop_front();
  for(auto i : d) cout<<i<<" ";

  */


  return 0;
}