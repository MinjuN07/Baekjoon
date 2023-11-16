#include<stdio.h>
int main(){
	int n,i,k=6;
	scanf("%d",&n);
	for(n-=1,i=0;n>0;i++){
		n-=k;
		k+=6; 
	}
	printf("%d",i+1);
	return 0;
}