#include<stdio.h>
#include<string.h>
int main(){
	char a[81];
	int n,j,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int f=0,sum=0;
		scanf("%s",a);
		for(j=0;j<=strlen(a)-1;j++){
			if(a[j]=='O')sum+=++f;
			else f=0;
		}
		printf("%d\n",sum);
	}
	return 0;
}