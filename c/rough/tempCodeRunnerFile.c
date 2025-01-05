#include <stdio.h>

int main() {
    int a;
    int b;

    scanf("%d %d", &a, &b);
    int c = a+b;

    if (c>100)
        printf("Greater than 100");
    else 
        printf("less than 100");

    return 0;
}
