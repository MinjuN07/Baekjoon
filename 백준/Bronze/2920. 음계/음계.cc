#include<stdio.h>
int n,i,f;
int main(){
	for(i=1;i<9;i++){
		scanf("%d",&n);
		if(!f&&n==i)f=0;
		else if(n-8+i==1)f=1;
		else {printf("mixed");return 0;}
	}
	if(f)printf("descending");
	else printf("ascending");
}