#include<stdio.h>
int arr[101][101];
int main(){
	int n,a,b,i,j,sum=0;
	scanf("%d",&n);
	while(scanf("%d %d",&a,&b)!=EOF){
		for(i=a;i<a+10;i++){
			for(j=b;j<b+10;j++){
				if(arr[i][j]!=1)sum+=arr[i][j]=1;}}}
	printf("%d",sum);
}