#include<stdio.h>
int main(){
	int n,i,k=6;
	scanf("%d",&n);
	n--;
	for(i=0;n>=1;i++){
		n = n-k;
		k+=6; 
	}
	printf("%d",i+1);
	return 0;
}