#include<stdio.h>
#include<string.h>
char s[51];
int n;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",s);
		int f=0,k=0;
		for(int j=0;j<strlen(s);j++){
			if(s[j]=='(') f++;
			else if(f&&s[j]==')') f--;
			else k=1;
		}
		if(f||k) printf("NO\n");
		else printf("YES\n");
	}
}