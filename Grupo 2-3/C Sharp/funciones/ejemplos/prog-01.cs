using System;

class Principal
{

static void incremento(ref int valor){

    valor ++;
    Console.WriteLine("Valor= {0}",valor);
}    
static void Main(){

   int x = 10;

   incremento(ref x);
   Console.WriteLine("x = {0}",x);

}

}