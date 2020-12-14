using System;
class Principal
{
 
    static void Main(){

      int []datos = {3,5,4,1,2,6};

       Console.WriteLine("Ascendente!!!");
      Array.Sort(datos);
      for (int i=0; i<datos.Length; i++){
            Console.Write("{0} ", datos[i]);
      }
      Console.WriteLine();
      Console.WriteLine("Descendente!!!");  
      Array.Reverse(datos);
    for (int i=0; i<datos.Length; i++){
            Console.Write("{0} ",datos[i]);
      }




    }
}