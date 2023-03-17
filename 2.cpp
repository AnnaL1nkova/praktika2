/*
//task 1
namespace ConsoleApp1;

public class Program
{
    public class Student
    {
        private string secondName;
        private DateTime BdayDate;
        private int group;
        private List<int> grades = new List<int>();


        public void PrintInfo()
        {
            Console.WriteLine($"Фамилия - {secondName}\nГруппа - {group}\nДата рождения - {BdayDate}");
            foreach (int grade in grades)
            {
                System.Console.Write(grade + " ");
            }
            System.Console.WriteLine();
        }
        
        public void Changeinfo(string secondName)
        {
            this.secondName = secondName;
        }
        public void Changeinfo(string secondName, DateTime BdayDate)
        {
            this.secondName = secondName;
            this.dateOfBirth = BdayDate;
        }
        public void Changeinfo(string secondName, DateTime BdayDate, int group)
        {
            this.secondName = secondName;
            this.BdayDate = BdayDate;
            this.group = group;
        }

        public Student(string secondName, DateTime BdayDate, int group, List<int> grades)
        {
            this.secondName = secondName;
            this.BdayDate = BdayDate;
            this.group = group;
            this.grades = grades;
        }
    }

    static void Main()
    {
        Student anna = new Student("abcd", new DateTime(2003, 03, 16), 666, new List<int> {5, 2, 3, 3, 4});
        dima.Changeinfo(secondName: "Linkova", BdayDate: new DateTime(2004,02,15), group: 621);
        anna.PrintInfo();
    }
}
*/
/*
//task 2
namespace ConsoleApp2;

public class Task2
{
    public class Train
    {
        private string stantion;
        public int id{get; private set;}
        private DateTime timeDepature;
        public void PrintInfo()
        {
            
            Console.WriteLine($"Станция - {this.stantion}\nНомер поезда - {this.id}\nВремя отправления - {this.timeDepature}");
                
        }
        
        public Train(string stantion, int id, DateTime timeDepature)
        {
            this.stantion = stantion;
            this.id = id;
            this.timeDepature = timeDepature;
        }
    }

    static void Main()
    {
        List<Train> trains = new List<Train>()
        {
            new Train("Аэропорт", 1, new DateTime(year : 2023, month : 6, day : 7, hour: 4, minute : 0)),
            new Train("Новосибирск", 2, new DateTime(year : 2024, month : 11, day : 22, hour: 11, minute : 0)),
            new Train("Москва", 3, new DateTime(year : 2025, month : 9, day : 1, hour: 7, minute : 0))
        };
        int _id = int.Parse(Console.ReadLine());
        foreach(Train train in trains)
        {
            if (train.id == _id)
                train.PrintInfo();
        }
    }
}
*/
/*
//task 4
namespace ConsoleApp4;

public class Program
{
    public class Counter
    {
        private int counter;

        public void Show()
        {
            Console.WriteLine(counter);
        }
        
        public void Increment()
        {
            counter++;
        }
        public void Decrement()
        {
            counter--;
        }

        public Counter()
        {
            counter = 0;
        }

        public Counter(int num)
        {
            counter = num;
        }
    }

    static void Main()
    {
        Counter c1 = new Counter();
        c1.Show();
        c1.Increment();
        c1.Show();

        Counter c2 = new Counter(621);
        c2.Show();
        for (int i = 0; i < 21; i++)
        {
            c2.Decrement();
        }
        c2.Show();
    }
}
*/
/*
//task 3
namespace ConsoleApp3;

public class Program
{
    public class TwoNums
    {
        private int a;
        private int b;

        public void Print()
        {
            Console.WriteLine($"Первое число - {a} второе число - {b}");
        }

        public void Change(int a, int b)
        {
            this.a = a;
            this.b = b;
        }

        public int Sum()
        {
            return a + b;
        }

        public int Bigest()
        {
            return a > b ? a : b;
        }
        
        public TwoNums(int a, int b)
        {
            this.a = a;
            this.b = b;
        }
    }

    static void Main()
    {
        TwoNums numbers = new TwoNums(621, 18);
        numbers.Print();
        Console.WriteLine(numbers.Sum());
        Console.WriteLine(numbers.Bigest());
        numbers.Change(621, 123);
        numbers.Print();
    }
}
*/
/*
//task 5
namespace ConsoleApp5;

public class Program
{
    public class Test
    {
        private int a;
        private string name;
        private bool isLearn;

        public Test()
        {
            a = 621;
            name = "Anna";
            isLearn = true;
        }
        public Test(int a, string name, bool isLearn)
        {
            this.a = a;
            this.name = name;
            this.isLearn = isLearn;
        }
        
        public void Dispose()
        {
            this.Dispose();
        }
        
        ~Test()
        {
            Console.WriteLine("Обьект удален");
        }
    }

    static void Main()
    {
        Test test1 = new Test();
        Test test2 = new Test(621, "pup", isLearn:false);
        test2.Dispose();
    }
}
*/