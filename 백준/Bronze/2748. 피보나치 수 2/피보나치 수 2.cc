#include<stdio.h>
long long a[91]={0,1};
long long f(int x){
	if(!x)return 0;
	if(a[x])return a[x];
	else return a[x]=f(x-1)+f(x-2);
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%lld",f(n));
}