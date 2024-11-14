#include <iostream>
using namespace std;

int gcd(int p, int q){ if(p==0) return q; return gcd(q%p, p);}

long long lcm(long long a,long long b) {
  return a*b/gcd(a,b);
}
int main()
{
  int n;
  int a, b;
  cin >> n;
  for(int i=0;i<n;i++) {
    cin >> a >> b;
    cout << lcm(a,b) << endl;
  }
}