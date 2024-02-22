#include <stdio.h>
int main ()
{
    int a, b;
    float div;

     printf("Enter two integers to get output: ");
     scanf("%d %d", &a, &b);

     int sum = a + b;
     int sub = a - b;
     int mul = a * b;
    div = (float)a / b;

    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%d * %d = %d\n", a, b, mul);
    printf("%d / %d = %.2f\n", a, b, div);
    return 0;
}
