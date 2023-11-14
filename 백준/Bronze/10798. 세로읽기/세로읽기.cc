#include<stdio.h>
char a[6][16];
int main(){
	int j,i;
	for(i=0;i<5;i++)scanf("%s",a[i]);
	for(j=0;j<15;j++){
		for(i=0;i<5;i++){
			if(a[i][j]!='\0')printf("%c",a[i][j]);}}
	return 0;
}