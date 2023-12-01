#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    int x;
    bool check[n];
    for (int i = 0; i < n; i++) {
        check[i] = false;
    }

    int a;
    scanf("%d", &a);

    int a1[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &a1[i]);
        x = a1[i] - 1;
        check[x] = true;
    }

    int b;
    scanf("%d", &b);

    int b1[b];
    for (int i = 0; i < b; i++) {
        scanf("%d", &b1[i]);
        x = b1[i] - 1;
        check[x] = true;
    }

    for (int i = 0; i < n; i++) {
        if (!check[i]) {
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }

    printf("I become the guy.\n");

    return 0;
}
