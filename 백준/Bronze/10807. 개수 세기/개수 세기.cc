#include <stdio.h>

int main() {
   int n,v,a[101] = {0},f = 0;
   scanf("%d",&n);
	for(int i = 0;i < n;i++) {
		scanf("%d",&a[i]);
	}
	scanf("%d",&v);
	for(int i = 0;i < n;i++) {
		if(a[i] == v) f++;
	}
	printf("%d",f);
   return 0;
}