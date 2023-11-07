#include <stdio.h>
#include <string.h>
int main() {
	char a[101];
	int f = 1;
	scanf("%s",a);
	for(int i = 0;((int)strlen(a))/2 > i;i++) {
		if(a[i] == a[strlen(a)-1-i]);
		else f = 0;
	}
	printf("%d",f);
	return 0;
}