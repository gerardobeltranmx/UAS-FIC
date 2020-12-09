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

    static void Main(){
     
     


    }
}