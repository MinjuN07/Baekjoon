#include<stdio.h>
#include<algorithm>
int i,j,n,a[1000001];
int main(){
	scanf("%d",&n);
	while(i!=n)scanf("%d",&a[i++]);
	std::sort(a,a+n);
	while(j!=n)printf("%d\n",a[j++]);
}