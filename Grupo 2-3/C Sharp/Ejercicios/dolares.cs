using System;

class Principal
{
    static int Conversion(int Dolares, int TipoCambio)
    {
        int Pesos;
        Pesos = Dolares * TipoCambio;
        return Pesos;
    }

    static void Main( )
    {

        int Cantidad = Convert.ToInt32(Console.ReadLine());

        int Precio = Convert.ToInt32(Console.ReadLine());

        int Equivalencia = Conversion(Cantidad, Precio);

        Console.WriteLine("{0}", Equivalencia);


    }
}