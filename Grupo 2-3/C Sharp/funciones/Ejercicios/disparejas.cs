using System;
class Principal
{
    static int s(int N){
        int suma=0;
        for (int i=1; i<N;i++){
            if(N % i == 0)
                suma+=i;
        }
        return suma;
    }

    static int tipoPareja(int m, int n){
        if( s(m)==n && s(n) == m)
            return 0;
        else if( s(m)<=n && s(n) <= m)   
            return 1;
        else if( s(m)>=n && s(n) >= m) 
            return 2;
        else
            return 3;       
    }

    static void Main(){
        int x, y, p, q, r;
        string []datos;
        datos = Console.ReadLine().Split(' ');
        x = int.Parse(datos[0]);
        y = int.Parse(datos[1]);
        p = tipoPareja(x, y);
        q = tipoPareja(x, x);
        r = tipoPareja(y, y); 
        Console.WriteLine("{0} {1} {3}", p, q, r);
    }
}