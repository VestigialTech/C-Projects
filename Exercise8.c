#include <stdio.h>

int main(void)
{
    int num1, num2;
    int denom1, denom2;
    int result_num, result_denom;

    printf("Enter the first fraction please: ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter the second fraction please: ");
    scanf("%d/%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 *denom1;
    result_denom = denom1 * denom2;

    printf("the sum is %d/%d\n", result_num, result_denom);
        //note that the resulting fraction is not reduced
    return 0;
}
