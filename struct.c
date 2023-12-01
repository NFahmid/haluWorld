#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a;
    int b;

    scanf("%d %d", &a, &b);

    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            printf("*");
        }
        printf("\n");
    }

    
    return 0;
}