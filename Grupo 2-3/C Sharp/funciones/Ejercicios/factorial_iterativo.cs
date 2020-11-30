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


3! = 3 * factorial(2);


6! = 6 x 5 x 4 x 3 x 2 x 1

6! = 6 x factorial(5)

5! = 5 x factorial(4)

4! = 4 x factorial(3)

3! = 3 x factorial(2)

2! = 2 x factorial(1);

1! = 1

------------

N! = N * factorial(N-1)

factorial(N) = N * factorial(N-1)

0- Main
   factorial (5)

1- factorial (5)

    return 5 * factorial(4)

2- factorial(4)
    return 4 * factorial(3)

3- factorial(3)
    return 3 * factorial(2)

4- factorial(2)
   return 2 * factorial(1)

5- factorial(1)
   return 1








