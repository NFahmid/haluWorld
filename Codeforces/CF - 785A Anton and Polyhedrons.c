#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);

    int count = 0;

    for (int i=0; i<n; i++){
        char poly[15];
        scanf("%s", poly);

        if (poly[0] == 'T')
            count+=4;
        if (poly[0] == 'C')
            count+=6;
        if (poly[0] == 'O')
            count+=8;
        if (poly[0] == 'D')
            count+=12;
        if (poly[0] == 'I')
            count+=20;
    }

    printf("%d", count);

    return 0;
}
