#include <stdio.h>
int main() {
	char a[1000000],max;
	int s[123] = {0},f = 0;
	scanf("%s",&a);
	for(int i=0;a[i]!='\0';i++) {
		if(a[i] >= 97) s[a[i]-32]++;
		else s[a[i]]++;
	}
	for(int i=65;i<=90;i++) {
		if(s[i] > f) {
			f = s[i];
			max = i;
		}
		else if(s[i]==f) max = '?';
	}
	printf("%c",max);
	return 0;
}