#include<stdio.h>
int f(int y){
	if(!y) return 1;
	return y*f(y-1);
}
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	printf("%d",f(n)/(f(n-k)*f(k)));
}