#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        int a;
        scanf("%d", &a);

        if(a>0  && a<10){
            printf("%d\n", a-1);
        }

        else if(a>9 && a<100){
            printf("%d\n", a-10);
        }

        else if(a>99 && a<1000){
            printf("%d\n", a-100);
        }

        else if(a>999 && a<10000){
            printf("%d\n", a-1000);
        }

        else if(a>9999 && a<100000){
            printf("%d\n", a-10000);
        }

        else if(a>99999 && a<1000000){
            printf("%d\n", a-100000);
        }

        else if(a>999999 && a<10000000){
            printf("%d\n", a-1000000);
        }

        else if(a>9999999 && a<100000000){
            printf("%d\n", a-10000000);
        }

        else if(a>99999999 && a<1000000000){
            printf("%d\n", a-100000000);
        }
        else if (a==1000000000)
        printf("0\n");
    }
    return 0;
}