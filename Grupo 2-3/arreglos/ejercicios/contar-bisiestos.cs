using System;
class ContandoAñosBisiestos{
    static void Main(){
        
        int año, n_bisiestos=0;
        
        string [] datos;
        char[] separador = { ' ', '\t' };

        datos = Console.ReadLine().Split(separador,  StringSplitOptions.RemoveEmptyEntries  );
        
        for(int i = 0; i < datos.Length; i++){
            
           año = Convert.ToInt32(datos[i]);
            
           if(año % 4 == 0 && (año % 100 != 0 || año % 400 == 0))
              n_bisiestos++;
        }
        
       Console.WriteLine(n_bisiestos);
    }
}