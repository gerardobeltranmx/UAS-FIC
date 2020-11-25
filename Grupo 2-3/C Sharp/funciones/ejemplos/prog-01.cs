using System;

class Principal
{

static void incremento(ref int valor){

    valor ++;
    Console.WriteLine("Valor= {0}",valor);
}    
static void cambiar (ref int a, ref int b){
    int aux;
    aux = a;
    a = b;
    b = aux;
}
static void Main(){

   int x = 10;
   int y = 20; 

   cambiar( ref x, ref y);

   Console.WriteLine("x = {0}",x);
   Console.WriteLine("y = {0}",y);

}

}