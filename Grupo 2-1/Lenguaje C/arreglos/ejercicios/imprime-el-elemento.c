#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
        printf("%d ", datos[b-1]);

    }



    return 0;
}
