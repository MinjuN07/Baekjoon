#include<stdio.h>
int n,m,a[101],max,sum,f,t;
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		if(t < m) {a[i] = t; f++;}
	}
	for(int i=0;i<f;i++){
		for(int j=0;j<f;j++){
			for(int k=0;k<f;k++){
				if(j==i||k==i||j==k) continue;
				sum = a[i]+a[j]+a[k];
				if(sum > max && m >= sum) max = sum;  
			}
		}
	}
	printf("%d",max);
	return 0;
}