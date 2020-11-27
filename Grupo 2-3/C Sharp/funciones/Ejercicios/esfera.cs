using System;
class Principal
{
    static void DimesionesEsfera(double radio, out double volumen, out double superficie )
    {
        volumen = (4.0/3.0) * 3.1416 * Math.Pow(radio, 3);
        superficie = 4.0 * 3.1416 * Math.Pow(radio, 2); 
    }
    static void Main(){

        double r, v, s ;
        r = double.Parse(Console.ReadLine());
        DimesionesEsfera(r, out v, out s);
        Console.WriteLine("Volumen:{0:F2} Superficie:{1:F2}", v, s);
    }
}