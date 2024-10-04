#include<iostream>
#include<string.h>
using namespace std;
class Student
{
char Stunm[30],Roll[20];
int Age;
public:
    void setdata(char x[]="No Nmae",char y[]="No Roll",int z=0)
    {
    strcpy(Stunm,x);
    strcpy(Roll,y);
    Age=z;
    }
    void showdata()
    {
    cout<<"\nName of student="<<Stunm<<"\nRoll of student="<<Roll<<"\nAge of student="<<Age;
    }
};
int main()
{
Student Ob1,Ob2,Ob3,Ob4;
Ob1.setdata();
Ob2.setdata("Sachin Kumar");
Ob3.setdata("Ranjan Kumar","2022-CSE-58");
Ob4.setdata("Simran Kumari","2022-CSE-34",20);
Ob1.showdata();
Ob2.showdata();
Ob3.showdata();
Ob4.setdata();
return 0;
}