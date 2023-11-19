#include<stdio.h>
int main(){
    int n,m;
    for(;scanf("%d %d",&n,&m),n+m!=0;){
        printf("%s\n",m%n==0?"factor":(n%m==0?"multiple":"neither"));
    }
}