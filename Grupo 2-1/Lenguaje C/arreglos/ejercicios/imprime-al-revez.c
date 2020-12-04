#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int N, i;
    scanf("%d", &N);
    int datos[N];

    // Entrada de datos a arreglo
    for (i=0; i<N; i++)
        scanf("%d", &datos[i]);
    // Salida al revez de datos del arreglo
    for (i=N-1; i>=0; i--)
        printf("%d\n", datos[i]);
    return 0;
}
