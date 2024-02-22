#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,a;
    scanf("%d", &n);

    for ( int i=0; i<n; i++ ){
        scanf("%d", &a);
        if ( a <= 5 ){
            switch (a)
            {
            case 0: 
                printf("0\n");
                break;
            case 1: case 2:
                printf("1\n");
                break;
            case 3: case 4: case 5:
                printf("2\n");
                break;
            default:
                break;
            }
        }

        else {
            a-=1;
            printf("%d\n", a/2);
        }
    }
    return 0;
}