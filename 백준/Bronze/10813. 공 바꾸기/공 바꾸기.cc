#include <stdio.h>

int main() {
    int arr[101],n,m,temp,a,b;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) arr[i]=i;
    for(int i=0;i<m;i++){
    	scanf("%d %d",&a,&b);
    	temp=arr[a];
    	arr[a]=arr[b];
    	arr[b]=temp;
	}
    for(int i=1;i<=n;i++) printf("%d ",arr[i]);
    return 0;
}
