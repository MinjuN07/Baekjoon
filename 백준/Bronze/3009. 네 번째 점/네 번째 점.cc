#include<stdio.h>
int l[1001],r[1001],a[5],b[5];
int main(){
    for(int i=0;i<3;i++){
    	scanf("%d %d",&a[i],&b[i]);
    	l[a[i]]++;
    	r[b[i]]++;
	}
	for(int i=0;i<3;i++){
		if(l[a[i]] == 1) a[5] = a[i];
		if(r[b[i]] == 1) b[5] = b[i]; 
	}
	printf("%d %d",a[5],b[5]);
}