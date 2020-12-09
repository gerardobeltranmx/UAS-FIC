#include <stdio.h>

int main()
{
     unsigned long long	 r,r2,res, a,b,c,d ;
    scanf("%llu", &a);
    
    scanf("%llu", &b);
    scanf("%llu", &c);
    scanf("%llu", &d);

    r=(c+d)*b;
    r2=a*d;
    res=r+r2;
    printf("Superficie: %llu",res); 
 
}