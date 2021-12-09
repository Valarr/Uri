using System;


namespace ConsoleApplication3
{
    class Program
    {
       public static void Main(string[] args)
        {

           while (true)
           {
               string[] imput = Console.ReadLine().Split();
               int X1 = Convert.ToInt32(imput[0]);
               int Y1 = Convert.ToInt32(imput[1]);
               int X2 = Convert.ToInt32(imput[2]);
               int Y2 = Convert.ToInt32(imput[3]);

               if (X1 == 0 && Y1 == 0 && X2 == 0 && Y2 == 0)
               {
                   break;
               }
                if(X1 == X2 && Y1 == Y2)
                {
                    Console.WriteLine("0");
                }
                else if(Math.Abs(X2-X1) == Math.Abs(Y2-Y1))
                {
                     Console.WriteLine("1");                  
                }        
                else if (X1 == X2 || Y1 == Y2)
                {
                    Console.WriteLine("1");
                }
                else
                {
                    Console.WriteLine("2");
                }


                
           }            
        }        
    }
}
