#include <stdio.h>
  int n,m;
  int arr[1025][1025];
  long long sum[1025][1025];
  long long temp;
int main() {
  scanf("%d %d",&n,&m);
  for(int i=1;i<=n;i++) {
  	for(int j=1;j<=n;j++) {
  		scanf("%d",&arr[i][j]);
  		temp += arr[i][j];
  		sum[i][j] = temp;
	  }
  }
  int x1,x2,y1,y2; 
  while(m--) {
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	int k = 0;
	for(int i=x1;i<=x2;i++) {
		if(y1==1) k += sum[i][y2] - sum[i-1][n];
		else k += sum[i][y2] - sum[i][y1-1];
  		}
  	printf("%d\n",k);
	}
  return 0;
}