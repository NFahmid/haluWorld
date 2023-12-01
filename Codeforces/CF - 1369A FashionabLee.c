#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        int a;
        scanf("%d", &a);

        if (a%4==0){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}