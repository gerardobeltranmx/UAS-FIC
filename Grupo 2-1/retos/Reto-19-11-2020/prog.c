#include <stdio.h>
int main(int argc, char const *argv[])
{
    int N, i, s, d;
    int recorridoMayor=-1, recorridoMenor=1000000;
    int diaMayor, diaMenor;
    int semanaMayor, semanaMenor;    
    scanf("%d",&N);

    for (i=1; i<=N; i++){

          scanf("%d %d", &s, &d);
          if (s > recorridoMayor){
              recorridoMayor = s;
              diaMayor = 1;
              semanaMayor = i;
          }  
         if (d > recorridoMayor){
             recorridoMayor = d;
             diaMayor = 2;
             semanaMayor = i;
         } 

         if (s < recorridoMenor){
              recorridoMenor = s;
              diaMenor = 1;
              semanaMenor = i;
         }
         if (d < recorridoMenor){
             recorridoMenor = d;
             diaMenor = 2;
             semanaMenor = i;
         } 
   }

    printf("El mejor recorrido fue la semana %d con %d kilómetros en el día %d\n",
            semanaMayor, recorridoMayor, diaMayor);

    printf("El peor recorrido fue la semana %d con %d kilómetros en el día %d\n",
             semanaMenor, recorridoMenor, diaMenor);

    return 0;
}
