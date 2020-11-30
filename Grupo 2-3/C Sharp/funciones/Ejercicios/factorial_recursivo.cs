using System;
class Principal
{
static long factorial(int N){

    if (N == 1)
       return 1;
    else
      return N * factorial(N-1);    
}

    static void Main(){

        int n = int.Parse(Console.ReadLine());
        Console.WriteLine(factorial(n));

    }
}