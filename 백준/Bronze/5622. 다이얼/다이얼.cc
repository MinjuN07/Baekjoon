#include <stdio.h>
int main(){
	int a[]={3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10},sum=0;
	char s[16];
	scanf("%s",&s);
	for(int i=0;s[i]!='\0';i++){
		sum+=a[s[i]-'A'];
	}
	printf("%d",sum);
	return 0;
}