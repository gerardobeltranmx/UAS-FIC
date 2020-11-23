#include <stdio.h>

int conversion(int dolares, int tipoCambio){
    int pesos;
    pesos = dolares * tipoCambio;
    return pesos;
}
int main()
{
    int cantidadDolares, precioDolar;
    int equivalenciaPesos;
    scanf ("%d", &cantidadDolares);
    scanf ("%d", &precioDolar);
    equivalenciaPesos = conversion(cantidadDolares, precioDolar);  
    printf("%d", equivalenciaPesos);
    return 0;
}
