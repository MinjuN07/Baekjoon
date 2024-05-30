#include <iostream>
#include <queue>

using namespace std;
int main() {
  queue<int> q;
  int n;
  cin >> n;
  for(int i=1;i<=n;i++) q.push(i);
  while(1) {
    if(q.size()==1) {
      cout << q.front();
      break;
    }
    q.pop();
    q.push(q.front());
    q.pop();
  }
}