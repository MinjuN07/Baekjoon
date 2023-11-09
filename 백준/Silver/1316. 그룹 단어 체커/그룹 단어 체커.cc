#include <stdio.h>
#include <string.h>
int main(){
	int n,word = 0;
	char str[101],ktr[27] = {0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",str);
		for(int j=0;j<(int)strlen(str);j++){
			if(str[j]==str[j+1]) continue; 
			else ++ktr[str[j]-97];
			if(ktr[str[j]-97] == 2){
				word++;
				break;
			}
		}
		for(int k=0;k<27;k++){
			ktr[k]=0;
		}
	}
	printf("%d",n-word);
	return 0;
}