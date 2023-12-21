#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("rough1.txt", "a+");
    fseek (fp, -2L, SEEK_END);
    fprintf(fp, "Hello ld\n");
    fclose(fp);
}
