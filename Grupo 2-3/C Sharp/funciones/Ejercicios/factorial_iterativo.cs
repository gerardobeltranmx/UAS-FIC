using System;
class Principal
{
    static long factorial(int N){
        long f=1;
        int  i;
        for (i=1; i<=N; i++){
            f = f * i;    
        }
        return f;
    }
    static void Main(){
      int n = int.Parse(Console.ReadLine());
      Console.WriteLine(factorial(n));
    }
}

