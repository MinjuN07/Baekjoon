#include<stdio.h>
int a[]={25,10,5,1};
int main(){
	int n,k;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&k);
		int j=0,b[5]={0};
		while(j!=4){
			if(k>=a[j]){k-=a[j];b[j]++;}
			else printf("%d ",b[j++]);
			}
		printf("\n");
		}
	return 0;
}