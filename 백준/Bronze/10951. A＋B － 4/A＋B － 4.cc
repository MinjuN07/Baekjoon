#include <stdio.h>

int main() {
   int o1, o2;
   
   while(scanf("%d %d", &o1, &o2) != EOF)
      printf("%d\n", o1+o2);
      
   return 0;
}