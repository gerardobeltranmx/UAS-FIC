#include <stdio.h>
#define PI  3.14159

void dimensionesEsfera(double radio, double *volumen, double *area){
    *volumen = (4.0/3) * PI * radio*radio*radio;
    *area = 4 * PI * radio*radio;
}

int main()
{
    double radio, v=1, a=2;

    scanf("%lf", &radio);

    dimensionesEsfera(radio, &v, &a);

    printf("Volumen:%.2f Superficie:%.2f", v, a);

    return 0;
}
