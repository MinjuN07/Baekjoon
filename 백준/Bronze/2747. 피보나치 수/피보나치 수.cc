#include <stdio.h>
int memo[50] = {0,1,1,2,3,5,8,13,21,34,55};
long long int f(int n){
	if(!n) return 0;
	if(memo[n]) return memo[n];
	else return memo[n]=f(n-1)+f(n-2);
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%lld",f(n));
	return 0;
}