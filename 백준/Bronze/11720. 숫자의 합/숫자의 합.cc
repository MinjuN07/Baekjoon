#include <stdio.h>
#include <string.h>

int main() {
	int a,b,sum = 0;
	scanf("%d",&a);
	for(int i = 0;i < a;i++) {
		scanf("%1d",&b);
		sum = b + sum;
	}
	printf("%d",sum);
	return 0;
}