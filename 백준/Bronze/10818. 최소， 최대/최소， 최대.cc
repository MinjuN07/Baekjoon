#include <stdio.h>

int main() {
   int n,k,max = -10000000, min = 10000000;
   scanf("%d",&n);
	for(int i = 0;i < n;i++) {
		scanf("%d",&k);
		if(k > max) max = k;
		if(k < min) min = k;
	}
	printf("%d %d",min,max);
   return 0;
}