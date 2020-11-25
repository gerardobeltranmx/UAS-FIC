#include <stdio.h>

int cantidadBilletes(int *dinero, int tipo){

    int num = (*dinero) / tipo;
    (*dinero) = (*dinero) % tipo;
    return num;
}

int main()
{
   int cantidad;
    scanf ("%d", &cantidad);
    printf("De 500 hay %d\n",cantidadBilletes(&cantidad, 500));
    printf("De 200 hay %d\n", cantidadBilletes (&cantidad , 200));
    printf("De 100 hay %d\n", cantidadBilletes (&cantidad , 100));
    printf("De 50  hay %d\n", cantidadBilletes (&cantidad , 50));
    printf("De 25  hay %d\n", cantidadBilletes (&cantidad , 25));
    printf("De 10  hay %d\n", cantidadBilletes (&cantidad , 10));
    printf("De 5   hay %d\n", cantidadBilletes (&cantidad , 5));
    printf("De 1   hay %d\n", cantidadBilletes (&cantidad , 1));
    
    





    return 0;
}
