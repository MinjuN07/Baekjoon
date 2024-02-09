#include <stdio.h>
long long int f(int n){
	if(n>1) return n*f(n-1);
	return 1;
}
int main(){
	int n;
	scanf("%lld",&n);
	printf("%lld",f(n));
	return 0;
}