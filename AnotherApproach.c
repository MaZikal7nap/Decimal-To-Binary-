#include<stdio.h>
int main()
{
int n=8,r=0,m=0,b=1,s=0;
while ( n > 0)
{
    r = n%2;   // remainder
    m = b*r;  
    s = s+m;
    b = b*10;   // multiplying with 10 power.
    n = n/2;
}
printf("%d",s);
return 0;
}