#include <stdio.h>

int main() {
	char a[1001],b;
	int n;
	scanf("%s\n%d",&a,&n);
	for(int i = 0;i < 1001; i++) {
		if(i == n-1) {
			printf("%c",a[i]);
			break;
		}
	}
	return 0;
}