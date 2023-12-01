#include <stdio.h>
#include <stdlib.h>

int compareIntegers(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;

    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    qsort(a, n, sizeof(int), compareIntegers);

    long long x = 0;
    long long y = 0;

    for (int i = 0; i < n; i++) {
        if (i <= (n / 2) - 1){
            x += a[i];
        }
        else{
            y += a[i];
        }
    }

    long long ans = x * x + y * y;

    printf("%lld", ans);

    return 0;
}
