#include <stdio.h>
#include "cs50.h"
#include <string.h>

int main(void)
{
    string names[] = {"john", "sujan", "kushal", "ujjwal", "aayu", "nischal", "sanjok"};
    for(int i = 0; i < 7; i++) {
        if(strcmp(names[i], "sujan") == 0) {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}