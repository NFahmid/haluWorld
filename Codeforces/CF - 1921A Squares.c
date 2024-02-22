#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);

    for ( int i=0; i<n; i++ ){
        int a1,a2,a3,a4,b1,b2,b3,b4;
        scanf("%d %d %d %d %d %d %d %d", &a1, &b1, &a2, &b2, &a3, &b3, &a4, &b4);
        
        int j,k;

        int j1 = a2 - a1;
        if ( j1<0 )
            j1 = -j1;

        int k1 = b2 -b1;
        if ( k1<0 )
            k1 = -k1;
        
        int j2 = a3 - a1;
        if ( j2<0 )
            j2 = -j2;

        int k2 = b3 - b1;
        if ( k2<0 )
            k2 = -k2;

        if ( j1<=j2 )
            j = j1;
        else 
            j = j2;

        if ( k1<=k2 )
            k = k1;
        else 
            k = k2;

        j = j*j;
        k = k*k;
        
        j+=k;
        
        j = sqrt(j);

        printf("%d\n", j);
        
    }
    return 0;
}