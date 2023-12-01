#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareIntegers(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}


int main(){
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        int a;
        scanf("%d", &a);

        int b[a];
        for (int j=0; j<a; j++){
            scanf("%d", &b[j]);
        }

        qsort(b, a, sizeof(int), compareIntegers);

        int x = 1;

        for (int j=0; j<a-1; j++){
            if  ((b[j+1]-b[j]) > 1){
                x = 0;
            }
        }

        if (x==1)
            printf("YES\n");
        else if (x==0)
            printf("NO\n");
    }
}
