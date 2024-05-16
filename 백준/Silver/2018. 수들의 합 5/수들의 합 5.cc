#include <iostream>

using namespace std;

int main() {
  int n,c = 1;
  int f = 1,l = 1;
  int sum = 1;
  cin>>n;

  while(1) {
    if(sum >= n) sum -= f++;
    else if(sum < n) sum += ++l;
    if(sum == n) c++;
    if(l == n) break;
  }
  cout<<c;
  return 0;
}