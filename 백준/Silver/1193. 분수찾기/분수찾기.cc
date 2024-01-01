#include<stdio.h>
int n,l,e,t,b;
int main(){
	scanf("%d",&n);
	while(n>e){
		l+=1;
		e+=l;
	}
	n=e-n;
	if(l%2){
		t=n+1;
		b=l-n;
	}
	else{
		t=l-n;
		b=n+1;
	}
	printf("%d/%d",t,b);
}