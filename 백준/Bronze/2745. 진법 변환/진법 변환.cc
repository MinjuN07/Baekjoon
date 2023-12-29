#include<stdio.h>
#include<string.h>
#include<math.h>
char n[31];
int b,k,i,j;
int main(){
	scanf("%s %d",&n,&b);
	j = strlen(n);
	for(i=0;i<j;i++){
		if(n[i]>='A') k += (n[i]-55) * pow(b,j-i-1);
		else if(n[i] >= '0') k += (n[i]-'0') * pow(b,j-i-1);
	}
	printf("%d",k);
	return 0;
}