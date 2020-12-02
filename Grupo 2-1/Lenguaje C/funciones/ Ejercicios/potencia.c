#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int potencia_iterativa (int a, int b){
    /*
      pot(5, 3) = 5 * 5 * 5
      pot (2, 2) = 2 * 2
      pot(3, 5) = 3 * 3 * 3 * 3 * 3
    */
    int p = 1;
    for (int i=1; i <= b; i++ )
     p = p * a;
    return p;
}

int potencia_recursiva (int a, int b){
    if (b==1)
        return a;
      else 
          return a * potencia_recursiva (a, b-1);  
    
    /*
      pot(5, 3) = 5 * 5 * 5
      pot(5, 3) = 5 * pot(5,2)
      pot(3, 5) = 3 * pot(3, 4)
      pot (3,4) = 3 * pot(3,3)
      pot(3,3) = 3 * pot(3,2)
      pot(3,2) = 3 * pot(3,1)
      pot(3,1) = 3

      


      pot (2, 2) = 2 * 2
      pot(3, 5) = 3 * 3 * 3 * 3 * 3
    */
    
}



int main(int argc, char const *argv[])
{
    int x, y;
    scanf ("%d %d", &x, &y );
    int r = potencia_recursiva(x, y);
    printf ("%d\n", r );
    return 0;
}
