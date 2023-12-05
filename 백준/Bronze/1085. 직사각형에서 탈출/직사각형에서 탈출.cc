#include<stdio.h>
int main(){
	int a,b,w,h,s,d;
	scanf("%d%d%d%d",&a,&b,&w,&h);
	if(w-a >= h-b) s = h-b;
	else s = w-a;
	if(a >= b) d = b;
	else d = a;
	printf("%d",s >= d ? d : s);
}