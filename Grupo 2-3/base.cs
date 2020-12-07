using System;
class Principal
{
    static void Main(){
     
     int N = int.Parse(Console.ReadLine());

     switch (N)
     {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            Console.WriteLine("Reprobado");
            break;
        case 6:
            Console.WriteLine("Suficiente");
            break;
        case 7:
        case 8:
            Console.WriteLine("Bien");
            break:
        case 9:
          Console.WriteLine("Muy Bien");
            break:
        case 10:
            Console.WriteLine("Sobresaliente");
            break;
        default:
         Console.WriteLine("Error");
     }


    }
}