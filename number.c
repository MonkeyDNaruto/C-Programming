#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int numbers[] = {7, 5, 8, 2, 4, 0, 6};
    for( int i = 0; i < 7; i++) {
        if( numbers[i] == -1) {
            printf("Found \n");
            return 0;
        }
    }
    printf("Not found \n");
    return 1;
}