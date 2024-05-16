
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n,m,t;
  int f = 0;
  cin>>n>>m;
  vector<int> a(n);
  vector<int> b(n);
  for(int i=0;i<n;i++) {
    cin>>t;
    a[i]=t;
    if(m-t!=t) b[i]=m-t;
    for(int j=0;j<b.size();j++) {
      if(t == b[j] && a[i]!=0) {
        a[i] = b[j] = 0;
        f++;
      }
    }
  }
  cout<<f;
  return 0;
}