/*computes the dimensional weight of a
box from input provided by the user*/
#include <stdio.h>
int main(void)
{
    int height, length, width, volume, weight;

    //I had an error here, where the program returned 0; this was because all
    //of my variables within the printf statements were "height"

    printf("Please enter the length of the provided box:\n");
    scanf("%d", &length);
    printf("Please enter the height of the provided box:\n");
    scanf("%d", &width);
    printf("Finally, if you could please enter the width of the provided box:\n");
    scanf("%d", &height);
    volume = length * width * height;
    weight = (volume + 165) / 166;

    printf("Volume (represented in cubic inches): %d\n", volume);
    printf("Dimensional weight(represented in pounds): %d,\n", weight);

    return 0;
}
