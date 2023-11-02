#include <stdio.h>
int main() {
	int a[7]={1,1,2,2,2,8},t;
	for(int i=0;i<6;i++){
		scanf("%d",&t);
		printf("%d ",a[i]-t);
	}
	return 0;
}