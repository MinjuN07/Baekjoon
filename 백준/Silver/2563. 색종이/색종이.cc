#include<stdio.h>
int arr[101][101];
int main(){
	int n,a,b,i,j,k,gum=0;
	scanf("%d",&n);
	for(k=0;k<n;k++){
		int sum=0;
		scanf("%d %d",&a,&b);
		for(i=a;i<a+10;i++){
			for(j=b;j<b+10;j++){
				if(arr[i][j]) sum++;
				arr[i][j] = 1;}}
		gum+=100-sum;}
	printf("%d",gum);
}