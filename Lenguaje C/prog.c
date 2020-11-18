#include <stdio.h>

int suma(int a, int b);
int resta(int a, int b);
int multiplica(int a, int b);
int divide(int a, int b);

int main()
{
    int k;
    k= suma(61,7);
    
    printf("El valor de K es %d\n", k);

    k= resta(61,7);
        printf("El valor de K es %d\n", k);
 
    k= multiplica(61,7);
     printf("El valor de K es %d\n", k);

    k= divide(61,7);
     printf("El valor de K es %d\n", k);

    return 0;
}

int suma(int a, int b){
    int c;
    c = a + b;
    return c;
    
}
int resta(int a, int b){
    int c;
    c = a - b;
    return c;
    
}
int multiplica(int a, int b){
    int c;
    c = a * b;
    return c;
    
}
int divide(int a, int b){
    int c;
    c = a / b;
    return c;
    
}

