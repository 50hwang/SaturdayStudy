/* recursive funtion sample */
#include <stdio.h>

int add_total_recursive(int num)
{
    if(num == 0)
    {
       return 0;
    }
    else
    {
        return num += add_total_recursive(num-1);
    }
}

void main()
{
    printf("%d\n", add_total_recursive(5));
}