#include<stdio.h>
#include<string.h>
int main(){
	char c[10001];
	int t,f;
	while(scanf("%s",&c)){
		if(c[0]=='0') break;
		t=strlen(c)-1;
		f=0;
		for(int i=0;i<t;i++) if(c[i]!=c[t-i]) f=1;
		if(f) printf("no\n");
		else printf("yes\n");
	}
}