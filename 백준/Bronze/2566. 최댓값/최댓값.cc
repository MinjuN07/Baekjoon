#include <stdio.h>
int main(){
	int a[9][9],b=0,c=0;
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			scanf("%d",&a[i][j]);
			if(a[b][c]<a[i][j]){b=i; c=j;}
		}
	}
	printf("%d\n%d %d",a[b][c],b+1,c+1);
	return 0;
}