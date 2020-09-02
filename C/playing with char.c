#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ch;
    char s[50], x[100];
    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", x);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", x);
    return 0;
}
