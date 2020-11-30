#include <stdio.h>
#include <stdlib.h>
#include <string.h>
long factorial(int N){

    if (N==0) {
        return 1;
    }
    else {
       return  N * factorial(N-1);  
    }

    // 5! = 5 x 4 x 3 x 2 x 1
    // N! = N * (N-1) * (N-2) * (N-3) ...
    // N! = N * (N-1)!
    // 5! = 5 * 4!  
    // 4! = 4 * 3!
    // 3! = 3 * 2!
    // 2! = 2 * 1!
    // 1! = 1
    // 0! = 1
    /*
     1- factorial(5)    ----> main
         return 5 *factorial(4)
    2- factorial(4)
         return 4 * factorial(3) 
    4- factorial(3)
         return 3 * factorial(2)
    5- factorial(2) 
      return 2 * factorial(1)
    6- factorial(1)
       return 1  
   */
   
  



   
}
int main(int argc, char const *argv[])
{
    int n;
    scanf ("%d", &n);
    printf ("%ld\n", factorial(n));
    return 0;

}
