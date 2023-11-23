#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,m,i,j,s=0,f=1;
	cin>>n;
	for(i=0;i<n;i++){
		f=1;
		cin>>m;
		if(m==1)continue;
		for(j=2;j<=sqrt(m);j++)
			if(m%j==0){f=0;break;}
		if(f)s++;
	}
	cout<<s;
}