#include<stdio.h>
int i,j,a[10001];
int main(){
	scanf("%d",&j);
	while(~scanf("%d",&i)) a[i]++;
	for(i=0;i<10001;i++){
		if(!a[i]) continue;
		for(j=0;j<a[i];j++) printf("%d\n",i);
	}
}