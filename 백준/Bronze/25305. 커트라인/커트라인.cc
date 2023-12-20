#include<stdio.h>
#include<algorithm>
int main(){
	int a[1001],n,k;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	std::sort(a,a+n);
	printf("%d",a[n-k]);
}