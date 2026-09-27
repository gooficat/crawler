#include "menu.h"
#include <stdio.h>

int menu_choice(char const **choices)
{
    int i, j;
    i = 0;
    puts("Type a number to make your choice:");
    while (choices[i])
    {
        int k;
        k = i + 1;
        printf("%i: %s\n", k, choices[i]);
        i = k;
    }
    putchar('\n');
    scanf("%i", &j);
    if (j > i)
    {
        return -1;
    }
    return j;
}
