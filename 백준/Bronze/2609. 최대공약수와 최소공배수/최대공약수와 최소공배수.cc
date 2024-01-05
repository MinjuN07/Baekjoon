#include <stdio.h>
int gcd(int p, int q){if(p==0) return q; return gcd(q%p, p);}
long long lcm(long long a,long long b) {return a*b/gcd(a,b);}
int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  printf("%d\n%lld",gcd(a,b),lcm(a, b));
}