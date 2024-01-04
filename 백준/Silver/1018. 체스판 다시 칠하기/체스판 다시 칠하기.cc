#include<stdio.h>
char arr[50][51];
int x,y,i,j,n,m,f1,f2,c=1000,r;
int main(){
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++){
		scanf("%s",arr[i]);
	}
	for(x=0;x<m-7;x++){
		for(y=0;y<n-7;y++){
			for (i=x;i<x+8;i++) {
                for (j=y;j<y+8;j++) {
                    if (((i-x+j-y)%2)==0) {
                        if(arr[i][j]!='W') f1++;
                    }
                    else {
                        if(arr[i][j]!='B') f1++;
                    }
                }
            }
            for (i=x;i<x+8;i++) {
                for (j=y;j<y+8;j++) {
                    if (((i-x+j-y)%2)==0) {
                        if(arr[i][j]!='B') f2++;
                    }
                    else {
                        if(arr[i][j]!='W') f2++;
                    }
                }
            }
            r=f1<f2?f1:f2;
            if(c>r)c=r;
            f1=0;
            f2=0;
		}
	}
	printf("%d",c);
}