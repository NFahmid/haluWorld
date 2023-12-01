#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        int a;
        scanf("%d", &a);
        int b[a];

        bool c[10] = {false};

        int count = 0;

        for (int j=0; j<a; j++){
            scanf("%d", &b[j]);
            if (!c[b[j]]){
                count++;
                c[b[j]] = true;
            }
        }


        printf("%d\n", count);

    }

    return 0;
}
