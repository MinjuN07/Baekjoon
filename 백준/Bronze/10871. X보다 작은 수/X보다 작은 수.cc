#include <stdio.h>

int main() {
   int n,x,a[10001] = {0};
   scanf("%d %d",&n, &x);
	for(int i = 0;i < n;i++) {
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < n;i++) {
		if(a[i] < x) printf("%d ",a[i]);
	}
   return 0;
}