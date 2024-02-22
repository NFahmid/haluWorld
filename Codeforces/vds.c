#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);

    if (n % 2 == 0 && n > 2){
        printf("1\n");
    }
    else {
        printf("2\n");
    }
    return 0;
}