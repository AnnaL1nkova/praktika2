/*
//task 1
using System;
class HelloWorld
{
    public class Worker
    {
        private string name;
        public string Name {get{return name;}}
        
        private string surname;
        public string Surname {get{return surname;}}
        
        private int rate;
        public int Rate {get{return rate;}}
        
        private int days;
        public int Days {get{return days;}}
        public int GetSalary()
        {
            return rate * days;
        }
        public Worker(string name, string surname, int rate, int days)
        {
            this.name = name;
            this.surname = surname;
            this.rate = rate;
            this.days = days;
        }
    }
    static void Main()
    {
        Worker worker = new Worker("Anna", "Linkova", 5000,365);
        Console.WriteLine(worker.GetSalary());
    }
}
*/
/*
//task 2
using System;
class HelloWorld
{
    public class Worker
    {
        private string name;
        public string Name {get{return name;}}
        
        private string surname;
        public string Surname {get{return surname;}}
        
        private int rate;
        public int Rate {get{return rate;}}
        
        private int days;
        public int Days {get{return days;}}
        public int GetSalary()
        {
            return rate * days;
        }
        public Worker(string name, string surname, int rate, int days)
        {
            this.name = name;
            this.surname = surname;
            this.rate = rate;
            this.days = days;
        }
    }
    static void Main()
    {
        Worker worker = new Worker("Anna", "Linkova", 5000,365);
        Console.WriteLine(worker.GetSalary());
    }
}
*/
/*
//task 3
using System;
class HelloWorld 
{
    public class Calculation
    {
        private string calculationLine;
        public void SetCalculationLine(string line)
        {
            calculationLine = line;
        }
        public string GetCalculationLine()
        {
            return calculationLine;
        }
        public void SetLastSymbolCalculationLine(char letter)
        {
           
            calculationLine = calculationLine.Insert(calculationLine.Length, letter.ToString());
        }
        public char GetLastSymbol()
        {
            return calculationLine[calculationLine.Length - 1];
        }
        public void DeleteLastSymbol()
        {
            calculationLine = calculationLine.Remove(calculationLine.Length - 1);
        }
    }
    static void Main()
    {
        Calculation calculation = new Calculation();
        calculation.SetCalculationLine("Linkova");
        Console.WriteLine(calculation.GetCalculationLine());
        calculation.SetLastSymbolCalculationLine('X');
        Console.WriteLine(calculation.GetCalculationLine());
        Console.WriteLine(calculation.GetLastSymbol());
        calculation.DeleteLastSymbol();
        Console.WriteLine(calculation.GetCalculationLine());
    }
}*/