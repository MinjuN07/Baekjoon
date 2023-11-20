#include<stdio.h>
int main(){
	int n,k,f=0,i=1;
	scanf("%d%d",&n,&k);
	while(f!=k){
		if(n%i++==0)f++;
		if(n<i && f<k){printf("0");return 0;}
	}
	printf("%d",i-1);
}