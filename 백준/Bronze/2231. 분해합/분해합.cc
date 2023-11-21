#include<stdio.h>
int f(int x){
	int s=0,t;
	while(x>0){
		t=x%10;
		s+=t;
		x=x/10;}
	return s;}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=n/2;i<n;i++){
		if(i+f(i)==n){printf("%d",i);return 0;}		
	}
	printf("0");
}