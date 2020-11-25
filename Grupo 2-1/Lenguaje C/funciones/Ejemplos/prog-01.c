#include<stdio.h>

void incrementar(int *a){
   (*a)++; 
   printf ("valor de a es = %d\n", (*a) );

}

void interCambiar(int *a, int *b){
   int aux;
   aux = (*a);
   (*a) = (*b);
   (*b) = aux;
    
}
int main()
{
    int x = 20;
    int y = 10;
  
    interCambiar(&x, &y);
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    
  
    return 0;
}
