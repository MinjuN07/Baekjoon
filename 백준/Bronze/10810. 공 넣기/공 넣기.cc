#include <stdio.h>

int main() {
	int n,m,a,b,c,k[101] = {0};
	scanf("%d %d",&n,&m);
	for(int i = 0;i < m;i++) {
		scanf("%d %d %d",&a,&b,&c);
		for(int j = a;j <= b;j++) {
			k[j] = c;
		}	
	}
	for(int i = 1;i <= n;i++) {
		printf("%d ",k[i]);
	}
}