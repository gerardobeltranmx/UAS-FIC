#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int s(int N){
    int suma=0;
    for(int i=1; i<N; i++){
        if(N % i == 0)
            suma+=i;
    }
    return suma;
}

int tipoPareja(int m, int n){
    if (s(m) == n && s(n)==m)
        return 0;
    else if (s(m) <= n && s(n)<=m)
        return 1;
    else if (s(m) >= n && s(n)>=m)
        return 2;
    else
        return 3;    
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    return 0;
}
