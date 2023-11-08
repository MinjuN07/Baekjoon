#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	int n,b=0,s=0;
	scanf("%d",&n);
	char *a= (char*)malloc(sizeof(char)*(n*8));
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++) {
		if(a[i]=='b'){
			++b;
		}
		if(a[i]=='s'){
			++s;
		}
	}
	printf("%s",(b>s)?"bigdata?":(b<s)?"security!":"bigdata? security!");
	free(a);
	return 0;
}
