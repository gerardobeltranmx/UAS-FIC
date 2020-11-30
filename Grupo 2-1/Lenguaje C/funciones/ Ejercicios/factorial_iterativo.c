#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long factorial(int N){
   // 5! = 5 x 4 x 3 x 2 x 1
   // N! = N * (N-1) * (N-2) * (N-3) ...
   long f=1;
 
   for (int i=N; i > 1 ; i--){
      f = f * i;
   }
   return f;
}
int main(int argc, char const *argv[])
{
    int n;
    scanf ("%d", &n);
    printf ("%ld\n", factorial(n));
    return 0;

}
