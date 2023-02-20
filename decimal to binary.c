#include <stdio.h>
int main()
{
    int n = 5, i = 0, rem = 0,count=0;

    int arr[5];

    for (i = 0; n != 0; i++)
    {
        rem = (n % 2);
        arr[i] = rem;
        n = (n / 2);
        count++;
    }
    while ( (count-1) >= 0)
    {
        printf("\t%d",arr[count-1]);
        count--;
    }   
    return 0;
}