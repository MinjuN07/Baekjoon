#include<stdio.h>
int q[100001],k,i,t,n,sum;
int main(){
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&n);
		if(!n) q[--t]=0;
		else q[t++]=n;
	}
	for(i=0;i<t;i++){
		sum+=q[i];
	}
	printf("%d",sum);
}