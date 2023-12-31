#include<stdio.h>
int n,i=2;
int main(){
	scanf("%d",&n);
	while(n!=1){
		if(n%i==0){n=n/i;printf("%d\n",i);}
		else i++;
	}
}