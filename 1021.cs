using System; 

class URI {

    static void Main(string[] args) { 

      double valor = Convert.ToDouble(Console.ReadLine());
               double mistyc = valor;
               double nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0, moeda1 = 0;
               double moeda50 = 0, moeda25 = 0, moeda10 = 0, moeda5 = 0, moeda01 = 0;


               while (valor >= 100)
               {
                   valor -= 100;
                   nota100++;
               }
               while (valor >= 50)
               {
                   valor -= 50;
                   nota50++;
               }
               while (valor >= 20)
               {
                   valor -= 20;
                   nota20++;
               }
               while (valor >= 10)
               {
                   valor -= 10;
                   nota10++;
               }
               while (valor >= 5)
               {
                   valor -= 5;
                   nota5++;
               }
               while (valor >= 2)
               {
                   valor -= 2;
                   nota2++;
               }
               while (valor >= 1)
               {
                   valor -= 1;
                   moeda1++;
               }
               while (valor >= 0.5)
               {
                   valor -= 0.5;
                   moeda50++;
               }
               while (valor >= 0.25)
               {
                   valor -= 0.25;
                   moeda25++;
               }
               while (valor >= 0.1)
               {
                   valor -= 0.1;
                   moeda10++;
               }
               while (valor >= 0.05)
               {
                   valor -= 0.05;
                   moeda5++;
               }
               while (valor >= 0.001)
               {
                   valor -= 0.01;
                   moeda01++;
               }

               Console.WriteLine("NOTAS:");
               Console.WriteLine("{0} nota(s) de R$ 100.00", nota100);
               Console.WriteLine("{0} nota(s) de R$ 50.00", nota50);
               Console.WriteLine("{0} nota(s) de R$ 20.00", nota20);
               Console.WriteLine("{0} nota(s) de R$ 10.00", nota10);
               Console.WriteLine("{0} nota(s) de R$ 5.00", nota5);
               Console.WriteLine("{0} nota(s) de R$ 2.00", nota2);
               Console.WriteLine("MOEDAS:");
               Console.WriteLine("{0} moeda(s) de R$ 1.00", moeda1);
               Console.WriteLine("{0} moeda(s) de R$ 0.50", moeda50);
               Console.WriteLine("{0} moeda(s) de R$ 0.25", moeda25);
               Console.WriteLine("{0} moeda(s) de R$ 0.10", moeda10);
               Console.WriteLine("{0} moeda(s) de R$ 0.05", moeda5);
               Console.WriteLine("{0} moeda(s) de R$ 0.01", moeda01);

    }

}