#include <stdio.h>
/*This program was created to help with my understanding of
alternate formats of int and float values using different conversion specifiers.
Additionally, modifying the minimum field width affecting the amount of significant
digits a program prints, as well as the spaces it prints, should there be more
digits than the variable holds.*/
int main(void)
{
    int i;
    float x;

    i = 40;
    x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i,i,i,i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
}
