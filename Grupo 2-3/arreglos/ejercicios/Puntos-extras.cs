using System;
class Principal
{
    static void Main(){

        int N, contador, sumaT, sumaP;
        string []datos;

        contador = int.Parse(Console.ReadLine()); // Numero de series

        for (int k=0; k<contador; k++){
            sumaP=0;
            sumaT=0;    
            N = int.Parse(Console.ReadLine()); // el tamaño de la serie
            for (int i=1; i<=N; i++)
                    sumaT+=i;
            datos = Console.ReadLine().Split(' ');

            for (int i=0; i<N-1;i++)
                sumaP+=int.Parse(datos[i]);

            int falta = sumaT - sumaP;

            Console.WriteLine(falta); 

        }


    }
}