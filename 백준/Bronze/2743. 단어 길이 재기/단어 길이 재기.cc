#include <stdio.h>

int main() {
	char a[101],b = 0;
	scanf("%s",&a);
	for(int i = 0;i < 101; i++) {
		if(a[i] == '\0') break;
		b++;
	}
	printf("%d",b);
	return 0;
}