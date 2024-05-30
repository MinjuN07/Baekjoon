#include <iostream>
#include <vector>

using namespace std;
int main() {
  vector<int> v(1000000);
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int N,M;
  cin>>N>>M;
  for(int i=0;i<N;i++) {
    int t;
    cin>>t;
    v[i+1]=v[i]+t;
  }
  for(int i=0;i<M;i++) {
    int j,k;
    cin>>j>>k;
    cout<<v[k]-v[j-1]<<"\n";
  }
  return 0;
}