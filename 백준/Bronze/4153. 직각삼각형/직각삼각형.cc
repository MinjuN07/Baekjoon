#include<stdio.h>
#include<algorithm>
int main(){
	int a[3];
	while(scanf("%d%d%d",&a[0],&a[1],&a[2])&&a[0]+a[1]+a[2]!=0){
		std::sort(a,a+3);
		if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])printf("right\n");
		else printf("wrong\n");	
	}
}