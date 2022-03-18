#import <stdio.h>
/*This program is used to show how multiple conversion specifiers are used at once */
int main(void)
{
  int i, j;
  float x, y;

  i = 10;
  j = 20;

  x = 43.2892f;
  y = 5527.0f;

  printf("i=%d, j=%d, x=%f, y=%f\n", i, j, x, y);
}
