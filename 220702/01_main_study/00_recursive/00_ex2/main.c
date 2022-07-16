/* recursive funtion sample as factorial */
#include <stdio.h>

int factorial_recursive(int num)
{
    if(num == 0)
    {
       return 1;
    }
    else
    {
        return num = num * factorial_recursive(num-1);
    }
}

void main()
{
    printf("%d\n", factorial_recursive(5));
}