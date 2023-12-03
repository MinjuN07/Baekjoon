#include<stdio.h>
int main(){
	int a,b,c,n;
	scanf("%d%d\n%d\n%d",&a,&b,&c,&n);
	if(a*n + b <= c*n && a<=c) printf("1");
	else printf("0"); 
}