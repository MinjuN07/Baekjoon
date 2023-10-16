#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    while (scanf("%[^\n]", s) != EOF) {
        printf("%s\n", s);
        getchar();
    }
    return 0;
}