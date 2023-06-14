#include <stdio.h>
#include "cs50.h"
#include <string.h>

typedef struct 
{
    string name;
    string number;
}
person;

int main(void) 
{
    person people[2];

    people[0].name = "Nischal";
    people[0].number = "9826327837";

    people[1].name = "Nishuka";
    people[1].number = "9825333344";

    for(int i = 0; i < 2; i++) {
        if(strcmp(people[i].name, "Nischal")) {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}