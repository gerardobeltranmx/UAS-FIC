using System;
class Principal
{
    static int potencia_iterativa(int a, int b ){
        int p=1;
        for (int i = 1; i<=b; i++)
            p= p*a;
        return p;
    }
     static int potencia_recursiva(int a, int b ){

           if (b == 1 )
                return a;
           else
               return  a * potencia_recursiva(a, b - 1 ); 

/*         
         5 ^ 3 = 5 * 5 * 5
         3 ^ 5 = 3 * 3 * 3 * 3 * 3
         3 ^ 5 = 3 * 3 ^ 4
         3 ^ 4 = 3 * 3 ^ 3
         3 ^ 3 = 3 * 3 ^ 2
         3 ^ 2 = 3 * 3 ^ 1
         3 ^ 1 = 3

         pot (3, 5) = 3 * pot(3, 4)
         pot (3, 4) = 3 * pot(3, 3)
         pot (3, 3) = 3 * pot(3, 2)
         pot (3, 2) = 3 * pot(3, 1)
         pot (3, 1) = 3

*/


    }
    static void Main(){
        string []datos = Console.ReadLine().Split(' ');
        int x = int.Parse(datos[0]);
        int y = int.Parse(datos[1]);
   //     int r = potencia_iterativa(x, y);
        int r = potencia_recursiva(x, y);

        Console.WriteLine(r);
    }
}