#include<iostream>
#include<string.h>
using namespace std;
class College
{
char Clgnm[30],Pnm[20];
unsigned int Estyr;
public:
    void setdata()
    {
    cout<<"\nEnter name of college:->";
    cin.getline(Clgnm,30,'\n');
    cout<<"Enter name of principle :->";
    cin.getline(Pnm,20,'\n');
    cout<<"Enter establisd year of college:->";
    cin>>Estyr;
    cin.ignore();
    }
    void setdata(char x[])
    {
    strcpy(Clgnm,x);
    strcpy(Pnm,"NO Name");
    Estyr=0;
    }
     void setdata(char x[],char y[])
    {
    strcpy(Clgnm,x);
    strcpy(Pnm,y);
    Estyr=0;
    }
     void setdata(char x[],char y[],int z)
    {
    strcpy(Clgnm,x);
    strcpy(Pnm, y);
    Estyr=z;
    }
    void showdata()
    {
    cout<<"\nName of college="<<Clgnm<<"\nNmae of Principle="<<Pnm<<"\nEstablised Year="<<Estyr;
    }
};
int main()
{
College Ob1,Ob2,Ob3,Ob4;
Ob1.setdata();
Ob2.setdata("Sachin Kumar");
Ob3.setdata("Ranjan Kumar","2022-CSE-58");
Ob4.setdata("Rahul kumar","2022-CSE-11", 20);
Ob1.showdata();
Ob2.showdata();
Ob3.showdata();
Ob4.showdata();
return 0;

}