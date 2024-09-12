  #include <stdio.h>
  #include <vector>
  #include <algorithm>
  using namespace std;

  int main()
  {
    int N,K;
    scanf("%d %d",&N,&K);
    vector<int> v(N);
    for(int i=0;i<N;i++) {
      scanf("%d",&v[i]);
    }
    sort(v.begin(),v.end());
    printf("%d",v[K-1]);
  }