#include <stdio.h>
int main(void) {
	int n;
	scanf("%d",&n);
	while(n != 0) {
		n = n-4;
		printf("long ");
	}
	printf("int");
	return 0;
}