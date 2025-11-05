/* Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.
*/
// 0 2 4 8 16 
#include <stdio.h>

int	    is_power2(unsigned int n)
{   
    unsigned int i = 1;
    while(i < n)
        i = i*2;
    if(i == n)
        return 1;
    return 0;
}

int main()
{
    unsigned int n = 0;
    printf("%d", is_power2(n));
    return 0;
}