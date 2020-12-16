#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int asc (const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}
int desc (const void * a, const void * b){
    return ( *(int*)b - *(int*)a );
}

int main()
{

    int N, i;
    int np=0, nn=0, num;

    scanf("%d", &N);

    int pos[N];
    int neg[N];
    

    for (i=0; i<N; i++){
        scanf("%d", &num);

        if (num>0) {
            pos[np]=num;
            np++;
        }
        else if (num<0){
            neg[nn]=num;
            nn++;
        }
    }

    qsort(pos, np, sizeof(int), asc); // Ordena Positivos Ascendente
    qsort(neg, nn, sizeof(int), desc); // Ordena Negativos Descendente

    printf("POSITIVOS\n");
    for (i=0; i< np; i++)
        printf("%d\n", pos[i]);

    printf("NEGATIVOS\n");
    for (i=0; i< nn; i++)
        printf("%d\n", neg[i]);




    return 0;
}