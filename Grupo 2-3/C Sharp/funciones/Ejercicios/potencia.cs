using System;
class Principal
{
    static int potencia_iterativa(int a, int b ){
        int p=1;
        for (int i = 1; i<=b; i++)
            p= p*a;
        return p;
    }
    static void Main(){
        string []datos = Console.ReadLine().Split(' ');

        int x = int.Parse(datos[0]);
        int y = int.Parse(datos[1]);

        int r = potencia_iterativa(x, y);

        Console.WriteLine(r);


        

    }
}