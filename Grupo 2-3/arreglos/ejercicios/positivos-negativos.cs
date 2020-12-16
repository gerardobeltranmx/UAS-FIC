using System;
class Principal
{
    static void Main(){
     
    int N, i;
    N = int.Parse(Console.ReadLine());
    int []pos = new int[N];
    int []neg = new int[N];
    int np=0, nn=0;
    string []datos = Console.ReadLine().Split(' ');
    for (i=0; i< N; i++){
        int num = int.Parse(datos[i]);
        if (num>0) pos[np++]=num;
        else if (num<0) neg[nn++]=num;
    } 
    Array.Sort(pos, 0, np); // Ordenar Ascendente
    Array.Reverse(neg, 0, nn); // Ordenar Descendente
    Console.WriteLine("POSITIVOS");
    for ( i=0;i < np; i++)
        Console.WriteLine(pos[i]);
    Console.WriteLine("NEGATIVOS");
    for (i=0;i < nn; i++)
        Console.WriteLine(neg[i]);
    }
}