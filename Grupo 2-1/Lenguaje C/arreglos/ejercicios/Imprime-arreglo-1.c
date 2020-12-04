#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int N,i ;
    
    scanf("%d", &N);
    int datos[N];

    for (i=0; i<N; i++)
        scanf("%d", &datos[i]);

    for (i=0; i<N; i++)
        printf("%d\n", datos[i]);

    return 0;
}