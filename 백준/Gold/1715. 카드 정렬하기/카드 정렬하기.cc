#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<>> pq;
    int n;
    int sum = 0;
    cin >> n;
    for(int i=0;i<n;i++) {
      int t;
      cin >> t;
      pq.push(t);
    }
    int s;
    if(pq.size() == 1) {
      cout << 0;
      return 0;
    }
    while(!pq.empty()) {
      s = pq.top();
      pq.pop();
      if(pq.empty()) {
        break;
      }
      s += pq.top();
      pq.pop();
      pq.push(s);
      sum += s;
    }
    cout << sum;
    return 0;
}