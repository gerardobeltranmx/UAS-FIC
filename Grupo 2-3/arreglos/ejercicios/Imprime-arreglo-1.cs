using System;
class Principal
{
    static void Main(){
     int N;

     N = int.Parse(Console.ReadLine());

     int [] datos = new int[N];

     string [] lectura = Console.ReadLine().Split(' ');

    for (int i=0; i< N; i++)
       datos[i]=int.Parse(lectura[i]);

    for (int i=0; i< N; i++)
       Console.WriteLine(datos[i]);

    }
}