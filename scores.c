#include<stdio.h>
int main(void)
{
    int n = printf("Enter a number: ");
    scanf("%d",&n);
    int scores[n];    
    int sum = 0;

    for(int i=0; i<n; i++) {
        scores[i] = printf("Enter the score: ");
        scanf("%d", &scores[i]);
        sum = sum + scores[i];
    }

    float average = sum / n;
    printf("average number is: %f\n", average);
    return 0;
}