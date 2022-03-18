#include <stdio.h>
/*
* Written by Nickolas Kusman
* This program is meant to calculate the volume, given L, W, & H
*/

int main(void)
{
    int length;
    int width;
    int height;
    int volume;
    int weight;
    // Alternatively, this could be declared in the following line:
    // int length, width, height, volume, weight

    length = 8;
    width = 12;
    height = 10;
    weight = (volume + 165) / 166;

    volume = length * width * height;

    printf("The volume equals: %d \n", volume);

    return 0;
}
