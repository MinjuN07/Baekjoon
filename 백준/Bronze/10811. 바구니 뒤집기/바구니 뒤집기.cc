#include <stdio.h>
int main() {
    int n,m,i,j,arr[101] = {0},t;
    scanf("%d %d",&n,&m);
    for(int c = 1;c <= n;c++) arr[c] = c; 
    for(int c = 0;c < m;c++) {
    	scanf("%d %d",&i,&j);
    	for(int k = j;k >= i;k--,i++) {
    		t = arr[i];
    		arr[i] = arr[k];
    		arr[k] = t;
		}
	}
	for(int c = 1;c <= n;c++) printf("%d ",arr[c]); 
}
