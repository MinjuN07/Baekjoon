#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, good = 0;
vector<long long> a;

int main() {
  cin >> n;
  a.resize(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  for(int i = 0; i < n; i++) {
    int f = 0, l = n - 1;
    int t = a[i];
    while(f < l) {
      if(t < a[f] + a[l]) {
        l--;
      }
      else if(t > a[f] + a[l]) {
        f++;
      }
      else {
        if(f != i && l != i) {
          good++;
          break;
        }
        else if(f == i)   f++;
        else if(l == i)   l--;
      }
    }
  }

  cout << good;

  return 0;
}
