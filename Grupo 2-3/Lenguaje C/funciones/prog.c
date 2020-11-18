#include <stdio.h>

int suma(int a, int b);
int resta(int a, int b);  
int multiplica(int a, int b);

int divide(int a, int b);
int operacion (int a, int b, char op);
int k;
int resultado;
int main()
{
    //int k;
    k= operacion(61, 7, '+');
    
    printf("El valor de K es %d\n", k);

    k= operacion(61,7, '-');
    printf("El valor de K es %d\n", k);
 
    k= operacion(61,7, '*');
     printf("El valor de K es %d\n", k);

    k= operacion(61,7, '/');
     printf("El valor de K es %d\n", k);

    return 0;
}

int operacion (int a, int b, char op){
   // int resultado;
    switch(op){
        case '+':
          resultado = suma(a,b);
          break;
        
        case '-':
          resultado = resta(a,b);
          break;

        case '*':
          resultado = multiplica(a,b);
          break;

        case '/':
          resultado = divide(a,b);
          break;
        
    }
    
    return resultado;
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

