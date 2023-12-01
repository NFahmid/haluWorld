#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int temp = n;
    int length = 0;

    while (temp != 0){
        temp/=10;
        length++;
    }

    for (int i=0; i<length; i++){
        int a = n%10;
        n/=10;
        if (a!=7  &&  a!=4){
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}
