

#include <stdio.h>
int main()
{

    float y, x, n;
    printf("Enter value of x \n");

    scanf("%f", &x);
    printf("Enter the value of n: \n");
    scanf("%f", &n);
    if (n == 1)
    {
        y = (1 + x);
        printf("the value of y is %f \n", y);
    }
    else if (n == 2)
    {
        y = (1 + x / n);
        printf("the value of y is %f \n", y);
    }
    else if (n == 3)
    {
        y = (1 + (x * x * x));
        printf("the value of y is %f \n", y);
    }
    else if (n < 1 || n > 3)
    {
        y = (1 + (n * x));
        printf("the value of y is %f \n", y);
    }
    return 0;
}