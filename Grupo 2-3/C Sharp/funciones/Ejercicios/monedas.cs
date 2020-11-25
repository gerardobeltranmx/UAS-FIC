using System;

class Principal
{

static int CambiarMonedas(ref int cantidad, int tipo){
   int num;
   num = cantidad / tipo;
   cantidad = cantidad % tipo;
   return num;
}
static void Main(){

   
   int dinero = int.Parse(Console.ReadLine());

   Console.WriteLine("De 500 hay {0}", CambiarMonedas(ref dinero, 500)); 
   Console.WriteLine("De 200 hay {0}", CambiarMonedas(ref dinero, 200)); 
   Console.WriteLine("De 100 hay {0}", CambiarMonedas(ref dinero, 100)); 
   Console.WriteLine("De 50  hay {0}", CambiarMonedas(ref dinero, 50)); 
   Console.WriteLine("De 25  hay {0}", CambiarMonedas(ref dinero, 25)); 
   Console.WriteLine("De 10  hay {0}", CambiarMonedas(ref dinero, 10)); 
   Console.WriteLine("De 5   hay {0}", CambiarMonedas(ref dinero, 5)); 
   Console.WriteLine("De 1 hay {0}", CambiarMonedas(ref dinero, 1)); 

}

}