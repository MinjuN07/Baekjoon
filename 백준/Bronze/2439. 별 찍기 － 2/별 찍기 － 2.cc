#include <stdio.h>
int main(void) {
	int n;
	scanf("%d",&n);
	for(int i=n;i>=1;i--) {
		for(int k=1;k<i;k++) printf(" ");
		for(int j=n;j>i-1;j--) printf("*");
		printf("\n");
	}
	return 0;
}