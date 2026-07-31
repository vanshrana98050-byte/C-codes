#include <stdio.h>

int main() {
    char str[50];
    char *p;
    int count = 0;

    printf("Enter string: ");
    gets(str);

    p = str;
    while(*p != '\0') {
        count++;
        p++;
    }

    printf("Length = %d", count);
    return 0;
}
