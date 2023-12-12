#include<stdio.h>
#include<algorithm>
int a[3];
int main(){
	while(1){
		scanf("%d%d%d",&a[0],&a[1],&a[2]);
		if(a[0]+a[1]+a[2]==0) break;
		std::sort(a,a+3);
		if(a[2]<a[0]+a[1]){
			if(a[2]==a[1]&&a[1]==a[0]) printf("Equilateral\n");
			else if(a[0]==a[2]||a[1]==a[2]||a[0]==a[1]) printf("Isosceles\n");
			else printf("Scalene\n");
		}
		else printf("Invalid\n");
	}
}