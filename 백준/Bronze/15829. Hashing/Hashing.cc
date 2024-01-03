#include<stdio.h>
#include<math.h>
int n,s,j,m=1234567891;
char k;
int main(){
	scanf("%d\n",&n);	
	for(int i=0;i<n;i++){
		scanf("%c",&k);
		s=s+((k-96)*pow(31,i));
	}
	printf("%d",s%m);
}