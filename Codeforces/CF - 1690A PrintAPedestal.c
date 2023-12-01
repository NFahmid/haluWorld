#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        int a;
        scanf("%d", &a);

        if (a%3==0){
            a/=3;
            printf("%d %d %d\n", a, a+1, a-1);
        }
        else if (a==7)
            printf("2 4 1\n");
        else if (a==8)
            printf("3 4 1\n");
        else if (a%3==2){
            a/=3;
            printf("%d %d %d\n", a+1, a+2, a-1);
        }
        else if (a%3==1){
            a/=3;
            printf("%d %d %d\n", a+1, a+2, a-2);
        }
    }
    return 0;
}