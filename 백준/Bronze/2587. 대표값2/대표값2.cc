#include<stdio.h>
#include<algorithm>
int a[5],s;
int main(){
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
		s+=a[i];
	}
	std::sort(a,a+5);
	printf("%d\n%d",s/5,a[2]);
}