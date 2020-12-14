#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int N, T, dato, sumaParcial, sumaTotal;

    scanf("%d", &T);
    
    for(int k=0; k<T; k++){
        sumaParcial=0, sumaTotal=0;
        scanf("%d", &N);
    
        for (int i=0; i<N-1; i++){
            scanf("%d", &dato);
            sumaParcial += dato;
        }
    
        for (int i=1;i<=N; i++){
            sumaTotal+=i;
        }

        int falta = sumaTotal-sumaParcial;
    
        printf("%d\n", falta);

    }

    return 0;

}