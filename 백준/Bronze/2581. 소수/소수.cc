#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int i,j,n,m,min=10000,sum = 0,f;
	cin>>n>>m;
	for(i=n;i<=m;i++){
        if(i==0||i==1) continue;
		f=1;
		for(j=2;j<=sqrt(i);j++)
			if(i%j==0){f=0;break;}
		if(f)sum+=i;
		if(f&&min>i)min=i;
	}
	if(!sum) cout<<-1;
	else cout<<sum<<'\n'<<min;
}