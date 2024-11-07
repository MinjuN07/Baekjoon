#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n,k;
  int sum = 0;
  cin >> n;
  vector<int> c;
  vector<int> m;
  int zero = 1;
  for(int i=0;i<n;i++) {
    cin >> k;
    if(k==0) zero=0;
    else if(k>0) c.push_back(k);
    else m.push_back(k);
  }
  sort(c.begin(),c.end(),greater<>());
  sort(m.begin(),m.end());
  for(int i=0;i<c.size();i++) {
    if(i+1 < c.size() && c[i+1] != 1 && c[i] != 1) {
      sum += c[i]*c[i+1];
      i++;
    }
    else sum += c[i];
  }
  for(int i=0;i<m.size();i++) {
    if(i+1 >= m.size()) sum += zero*m[i];
    else {
      sum += m[i]*m[i+1];
      i++;
    }
  }
  cout << sum;
  return 0;
}