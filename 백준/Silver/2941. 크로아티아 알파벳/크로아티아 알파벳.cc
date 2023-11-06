#include <stdio.h>
int main() {
	char a[101];
	int cnt = 0;
	scanf("%s",a);
	for(int i = 0;a[i]!='\0';i++) {
		if(a[i]=='d' && a[i+1]=='z' && a[i+2]=='=') {
			i=i+2;
			cnt++;} 
		else if(a[i+1]=='=' || a[i+1]=='-' || a[i+1]=='j' && (a[i]=='l' || a[i]=='n')) {
			i=i+1;
			cnt++;
		}
		else cnt++;
	}
	printf("%d",cnt);
	return 0;
}