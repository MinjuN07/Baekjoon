#include<stdio.h>
#include<algorithm>
struct people{
	int a;
	char e[101];
}s[100001];
bool cmp(const people& s1,const people& s2){
	return s1.a < s2.a;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %s",&s[i].a,&s[i].e);
	}
	std::stable_sort(s,s+n,cmp);
	for(int i=0;i<n;i++){
		printf("%d %s\n",s[i].a,s[i].e);
	}
}