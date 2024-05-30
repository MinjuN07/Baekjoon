#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int main() {
  stack<int> s;
  string prt;
  int n, f = 1, ch = 0;
  cin >> n;
  vector<int> r(n);
  vector<int> c(n);

  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    r[i] = t;
    while (f <= t) {
      s.push(f++);
      prt.append("+\n");
    }
    if (!s.empty() && s.top() == t) {
      c[ch++] = s.top();
      s.pop();
      prt.append("-\n");
    } else {
      cout << "NO";
      return 0;
    }
  }

  for (int i = 0; i < n; i++) {
    if (r[i] != c[i]) {
      cout << "NO";
      return 0;
    }
  }

  cout << prt;
  return 0;
}