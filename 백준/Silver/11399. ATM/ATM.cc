  #include <stdio.h>
  #include <vector>
  #include <algorithm>
  using namespace std;

  int main()
  {
    int N;
    int sum = 0;
    int res = 0;
    scanf("%d",&N);
    vector<int> v(N);
    for(int i=0;i<N;i++) {
      scanf("%d",&v[i]);
    }
    sort(v.begin(),v.end());

    for(int i=0;i<N;i++) {
      sum += v[i];
      res += sum;
    }
    printf("%d",res);
  }