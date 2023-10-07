#include <stdio.h>

int main() {
	int a[11] = {0},flag,max = 0;
	for(int i = 0;i < 9;i++) {
		scanf("%d",&a[i]);
		if(a[i]>max) {
			max = a[i];
			flag = i;
		}
	}
	printf("%d\n%d",max,flag+1);
	return 0;
}