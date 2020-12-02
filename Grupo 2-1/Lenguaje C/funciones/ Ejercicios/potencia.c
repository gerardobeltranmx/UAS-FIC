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
int main(int argc, char const *argv[])
{
    int x, y;
    scanf ("%d %d", &x, &y );
    int r = potencia_iterativa(x, y);
    printf ("%d\n", r );
    return 0;
}
