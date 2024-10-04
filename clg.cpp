#include<iostream>
using namespace std;
class Student
{
public:
char Stunm[30],Roll[20];// Data Member
unsigned int Age;

    void getdata()
    {  
    cin.ignore();     
    cout<<"\nEnter name of student:->";
    cin.getline(Stunm,30,'\n');
    cout<<"Enter roll of student:->";
    cin.getline(Roll,20,'\n');
    cout<<"Enter Age of student:->";
    cin>>Age;
    cin.ignore();

    }
    void Showdata()
    {
    cout<<"\nName of student="<<Stunm<<"\nRoll of student="<<Roll<<"\nAge of student="<<Age;
    }

};
int main()
{
Student *Ob;
int SIZE;
cout<<"Enter how many student details which you wnt to put:->";
cin>>SIZE;
//cin.ignore();
Ob=new Student[SIZE];
    for(int i=0;i<SIZE;i++)
    Ob[i].getdata();
    for(int i=0;i<SIZE;i++)
    Ob[i].Showdata(); 
return 0;   
}