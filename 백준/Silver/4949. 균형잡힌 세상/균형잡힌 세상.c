#include<stdio.h>
#include<string.h>
char s[101],st[101];
int main(){
	while(1){
		gets(s);
		if(s[0]=='.') break;
		int f=0,top=0;
		for(int j=0;j<strlen(s);j++){
			if(s[j]=='('||s[j]=='[') st[top++]=s[j];
			if(s[j]==')'&&'('!=st[--top]) {
					f=1;
					break;
			}
			if(s[j]==']'&&'['!=st[--top]){
				f=1;
				break;
			}
		}
		if(f||top) printf("no\n");
		else printf("yes\n");
	}
}