#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 13;
    int y = 31;

    printf("x is: %i\n y is: %i\n", x, y);
    swap(&x, &y);
    printf("x is: %i\n y is: %i\n", x, y);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}