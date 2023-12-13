#include<stdio.h>
#include<algorithm>
int main(){
	int a[4];
	scanf("%d%d%d",&a[0],&a[1],&a[2]);
	std::sort(a,a+3);
	if(a[2]>=a[1]+a[0]) printf("%d",(a[1]+a[0])*2-1);
	else printf("%d",a[0]+a[1]+a[2]);
}