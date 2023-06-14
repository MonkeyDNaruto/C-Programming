#include "cs50.h"
#include <stdio.h>

int main(void)
{
    int i = get_int("i: \n");
    int j = get_int("j: \n");

    if( i == j ) {
        printf("same\n");
    } else {
        printf("Different \n");
    }
    
}