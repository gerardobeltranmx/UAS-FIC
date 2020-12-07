#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int buscar(int pos, int v[]){
    return v[pos];
}
int main()
{
    int N, M, b;
    scanf("%d", &N);
    int datos[N];
    for (int i=0; i<N; i++){
        scanf("%d", &datos[i]);
    }

    scanf("%d", &M);
    for (int i=0; i<M; i++){
        scanf("%d", &b);
        int valor = buscar(b-1, datos);
        printf("%d ", valor);

    }



    return 0;
}
