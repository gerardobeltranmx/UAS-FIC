#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int asc (const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}
int main()
{
    int N;

    scanf ("%d", &N);
    int datos[N];
    for (int i=0; i<N; i++){ // Entrada de datos
        scanf("%d", &datos[i]);
    }

    qsort(datos, N, sizeof(int), asc); // Ordena Ascendente

    for (int i=0; i<N; i++){ // salida de los datos
        printf("%d\n", datos[i]);
    }


    return 0;
}
