#include <stdio.h>

struct student {
    int roll;
    float marks;
};

void display(struct student s) {
    printf("Roll: %d\nMarks: %.2f", s.roll, s.marks);
}

int main() {
    struct student s;
    printf("Enter roll and marks: ");
    scanf("%d%f", &s.roll, &s.marks);
    display(s);
    return 0;
}
