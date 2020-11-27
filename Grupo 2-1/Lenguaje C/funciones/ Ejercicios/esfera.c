#include <stdio.h>
#define PI  3.14159

double areaEsfera(double radio){
    double area;
    area = 4 * PI * radio*radio;
    return area;
}


double volumenEsfera(double radio){
    double volumen;
    volumen = (4.0/3) * PI * radio*radio*radio;
    return volumen;
}


int main()
{
    double radio, v, a;

    scanf("%lf", &radio);

    v = volumenEsfera(radio);
    a = areaEsfera(radio);

    printf("Volumen:%.2f Superficie:%.2f", v, a);

    return 0;
}
