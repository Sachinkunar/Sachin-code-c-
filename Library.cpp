#include<iostream>
using namespace std;
class Books
{
    
    string bookAuther;
    string bookCategory;
    string bookName;
    public:
    Books()
    {

    bookName="";
    bookAuther="";
    bookCategory="";


    }
    Books(string bk, string auth, string catg)

    {
      bookName=bk;
      bookAuther=auth;
      bookCategory=catg; 
    }
    void showBookDetails()
    {
        cout<<"Book Name   :"<<bookName<<endl;
        cout<<"Book Auther :"<<bookAuther<<endl;
        cout<<"Category    :"<<bookCategory <<endl;
    }
};
class Library
{
    Books myBooks[3];
    int count;
    public:
        Library()
        {
            count=0;
        }
        void addNewBook(Books &newBook)
        {
            if(count<3)
            {
                myBooks[count]=newBook;
                cout<<"Book Added..."<<endl;
                count++;
            }
            else
            {
                cout<<"Library is Full..."<<endl;
            }
        }
        //To display all books which is inside books array
        void showAllBooks()
        {
            for(int i=0;i<count;i++)
            {
                myBooks[i].showBookDetails();
            }
        }

};
int main()
{
    Books newBook1("Programming in Java","James","programming");
    Books newBook2("Let us C","Yashwant","programming");
    Books newBook3("Python Programmin ","James","programming");
    Books newBook4("Let us C","Yashwant","programming");

    Library mylib;
    mylib.addNewBook(newBook1);
    mylib.addNewBook(newBook2);
    mylib.addNewBook(newBook3);
    mylib.addNewBook(newBook4);


    mylib.showAllBooks();
    return 0;
}
