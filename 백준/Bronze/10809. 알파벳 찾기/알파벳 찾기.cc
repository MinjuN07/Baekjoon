#include<stdio.h>
#include<string.h>

int main() {
	char s[101] = {0};
	int A[26] = {-1,};
	int f = 0;
	scanf("%s",&s);
	for(int i = 0;i <= 26;i++) {
		A[i] =-1;
	}
	for(int i = 97;i <= 122;i++) {
		for(int j = 0;j <strlen(s);j++) {
			if(i == s[j]) {
				A[f] = j;
				break;
			} 
		}
		printf("%d ",A[f]);
		f++;
	}
}