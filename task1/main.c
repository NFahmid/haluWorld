#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool verify(int a){
    int x = a;
    int count = 0;
    while (x!=0){
        if (x%10==0)
            return false;
        x/=10;
        count++;
    }
    x = a;

    int c[count];
    for (int i=0; i<count; i++){
        c[i] = x%10;
        x/=10;
    }

    for (int i=0; i<count; i++){
        if (a%c[i]!=0)
            return false;
    }

    return true;

}


int main()
{
    int a,b;
    scanf("%d %d", &a,&b);

    for (int i=a; i<=b; i++){
        if (verify(i))
            printf("%d ", i);
    }

    return 0;
}
