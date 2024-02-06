using System;

namespace Book
{
  
    public struct Book
    {
        public string Title;
        public string Author;
        public int Pages;
        public int PublishingYear;
    }

    class Program
    {
        static void Main(string[] args)
        {
           
            Book book1;
            Book book2;

            
            book1.Title = "AIUB Life";
            book1.Author ="Zadid";
            
            book1.Pages = 185;
            book1.PublishingYear = 1853;

           
            book2.Title = "My AIUB Days";
            
            book2.Author = "Hasnat";
            book2.Pages = 265;
            book2.PublishingYear = 1976;

            Console.WriteLine("All Infos of Books:");
            Console.WriteLine("\n");
            Console.WriteLine("Book one :");
            
            Console.WriteLine("Title: " + book1.Title);
            
            Console.WriteLine("Author: " + book1.Author);
            Console.WriteLine("Number of book Pages: " + book1.Pages);
            Console.WriteLine("Publishing of Year: " + book1.PublishingYear);

            
            Console.WriteLine("\nBook two:");

            Console.WriteLine("Title: " + book2.Title);
            
            Console.WriteLine("Author: " + book2.Author);
            
            Console.WriteLine("Number of book Pages: " + book2.Pages);
            Console.WriteLine("Publishing of Year: " + book2.PublishingYear);

            
            Console.ReadLine();
        }
    }
}
