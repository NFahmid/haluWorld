#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);

    for (int i=0; i<n; i++){
        int a;
        scanf("%d", &a);
        int array[a];
        for (int j=0; j<a; j++){
            array[j] = j+2;
        }
        array[a-1] = 1;

        for (int j=0; j<a; j++){
            printf("%d ", array[j]);
        }
        printf("\n");
    }
    return 0;
}
