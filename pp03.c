#include <stdio.h>
int main()
{
int num;

//Taking input

printf("Sample input\n");
scanf("%d", &num);

//Checking if the number odd or even
if(num % 2 == 0)
{
    printf("Sample output\n");
    printf("even\n");
}
else
{
    printf("Sample output\n");
    printf("odd\n");
}
    return 0;
}


