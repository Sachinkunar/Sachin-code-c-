#include<iostream>
using namespace std;
class Distance
{
int KM,M,CM;
public:
    void get()
    {
    cout<<"\nEnter distane in Kilometer , Meter  and Centimeter :->";
    cin>>KM>>M>>CM;
    }
void show();
};
void Distance::show()
{
    while(CM>=100)
    {
    M++;
    CM-=100;
    }
    while(M>=1000)
    {
    KM++;
    M-=1000;
    }
cout<<"Distance="<<KM<<"Km, "<<M<<" m and "<<CM<<" Cm.";
}
int main()
{
Distance Ob1;
Ob1.get();
Ob1.show();
}