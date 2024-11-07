#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n,k,t;
  int f = 0;
  vector<int> c(11);
  cin >> n >> k;
  for(int i=0;i<n;i++) {
    cin >> t;
    c.push_back(t);
    }
  sort(c.begin(),c.end(), greater<>());
  for(int i=0;i<n;i++) {
    f = f+k/c[i];
    k = k%c[i];
  }
  cout << f;
  return 0;
}