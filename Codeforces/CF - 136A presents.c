#include <stdio.h>

int main() {
    int n;
    int x;
    scanf("%d", &n);

    int a[n];
    int b[n];

    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
        x = a[i];
        b[x-1] = i+1;
    }

    for (int i=0; i<n; i++){
        printf("%d ", b[i]);
    }

    return 0;
}
