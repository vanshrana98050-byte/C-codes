#include <stdio.h>

int main() {
    int a, b, ch;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("1.Add\n2.Sub\n3.Mul\n4.Div\n");
    scanf("%d", &ch);

    switch(ch) {
        case 1: printf("Sum = %d", a+b); break;
        case 2: printf("Diff = %d", a-b); break;
        case 3: printf("Product = %d", a*b); break;
        case 4: printf("Division = %d", a/b); break;
        default: printf("Invalid choice");
    }
    return 0;
}
