#include<stdio.h>
int n;
int main(){
	scanf("%d",&n);
	n=n/5+n/25+n/125;
	printf("%d",n);
} 