#include<stdio.h>
int main(){
	int n,m,f;
	while(scanf("%d %d",&n,&m)&&(n+m!=0)){
		f=0;
		if(m%n==0)f=2;
		if(n%m==0)f=1;
		printf("%s\n",(f>1?"factor":((!f)?"neither":"multiple")));
	}
}