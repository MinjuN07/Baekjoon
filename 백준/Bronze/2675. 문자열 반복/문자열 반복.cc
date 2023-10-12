#include <stdio.h>
#include <string.h>
int main(void) {
	int n,m;
	char s[20];
    	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%d %s", &m, s);
		for(int j=0; j < strlen(s); j++) 
			for(int k=0; k<m; k++) printf("%c", s[j]);	
		printf("\n");
	}
}