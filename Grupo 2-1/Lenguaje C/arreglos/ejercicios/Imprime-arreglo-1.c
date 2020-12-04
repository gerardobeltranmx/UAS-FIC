#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int N,i ;
    
    scanf("%d", &N);
    int datos[N]; // dimensionamos un variable arreglo
    // Entrada de datos a arreglo
    for (i=0; i<N; i++)
        scanf("%d", &datos[i]);
    // Salida de datos del arreglo
    for (i=0; i<N; i++)
        printf("%d\n", datos[i]);

    return 0;
}