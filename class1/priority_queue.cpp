#include <bits/stdc++.h>
using namespace std;

struct comp {
    // so is a has higher priority then b
    bool operator()(int a, int b) {
        // shall a apper before b
        // and this is a vector
        cout<<a<<" "<<b;
        return a > b;
    }
};


int main() {
    // min heap
    // as priority queue is a adopter container
    // its store value in vector 
    // so the top element maintain at last position 
    priority_queue<int, std::vector<int> , comp> pq;
    pq.push(10);
    pq.push(30);
    cout<<pq.top();
    return 0;
}