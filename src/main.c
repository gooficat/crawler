#include "menu.h"
#include <stdio.h>

int main()
{
    printf("You chose %i\n", menu_choice((char const *[]){"Goog", "Loog", NULL}));
    return 0;
}
