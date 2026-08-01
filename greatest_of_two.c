#include <stdio.h>
int main () {
    int age;
    printf("enter the age");
    scanf("%d",&age);
    if (age>18); {
        printf( "you are a adult \n");
    }
    else {
        printf("you are minor\n");
    }
    return 0 ;
}