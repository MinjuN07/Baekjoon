#include <stdio.h>
char a[6][16] = {0};
int main(){
	int j,i;
	for(i=0;i < 5;i++){
		scanf("%s",a[i]);
	}
	for(j = 0;j < 15;j++){
		for(i = 0;i < 5;i++){
			if(a[i][j] == '\0') continue;
			printf("%c",a[i][j]);
		}
	}
	return 0;
}