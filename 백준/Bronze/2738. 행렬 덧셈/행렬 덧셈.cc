#include <stdio.h>
int main(){
	int n,m,t;
	scanf("%d %d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&t);
			a[i][j] += t;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}