/* File: bonusgiventocharity.c
   calculate how much of your bonus you would have left over if
   you gave 15% to charity
*/
#include <stdio.h>

int main(void)
{
    float a, b;

    printf("How much of a bonus did you get? ");
    scanf(" %f", & a);
    b = .85 * a;
    printf("If you give 15 percent to charity, you will still ");
    printf("have $ %.2lf", b);
    return 0;
}
