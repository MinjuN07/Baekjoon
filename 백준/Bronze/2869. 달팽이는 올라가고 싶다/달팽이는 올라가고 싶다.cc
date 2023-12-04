#include<stdio.h>
int main(){
	long long int a,b,v,s,u;
	scanf("%ld %ld %ld",&a,&b,&v);
	if((v-b)%(a-b)!=0) printf("%d",((v-b)/(a-b)+1));
	else printf("%d",((v-b)/(a-b)));
}