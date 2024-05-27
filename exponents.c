#include <stdio.h>
#include <stdlib.h>

int main() {

    int x,y;
    int total = 1;
    scanf("%d %d", &x, &y);
    for(int i=0; i < y; i++) {
        total *= x;
    }
    printf("%d", x);

    return EXIT_SUCCESS;
}