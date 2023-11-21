#include<stdio.h>
#include<string.h>
int a[10],i,x,y,z;
int main(){
	char s[100];
	scanf("%d\n%d\n%d",&x,&y,&z);
	sprintf(s,"%d",x*y*z);
	for(i=0;i<strlen(s);i++)a[s[i]-48]++;
	for(i=0;i<10;i++)printf("%d\n",a[i]);
}