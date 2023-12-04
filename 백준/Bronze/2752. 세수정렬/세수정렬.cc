#include<stdio.h>
int main(){
	int i,a[3],b=0,s=1000001,t;
	for(i=0;i<3;i++){
	scanf("%d",&a[i]);
	if(b < a[i]) b = a[i];
	if(s > a[i]) s = a[i];
	}
	for(i=0;i<3;i++){
		if(b != a[i] && s !=a[i]) t = a[i];
	}
	printf("%d %d %d",s,t,b);
}