using System;
class Principal
{
    static void Main(){
     
     int N;

     N = int.Parse(Console.ReadLine());   

    string []datos = Console.ReadLine().Split(' ');

    Array.Sort(datos);

     for (int i=0; i<N; i++){
            Console.WriteLine(datos[i]);
      }
    }
}