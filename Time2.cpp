#include<iostream>
using namespace std;
class Time 
{
int Hr,Mn,Sec;
public:
    Time() 
    {
    Hr=Mn=Sec=0;
    }
    Time(int x,int y,int z)
    {
    Hr=x;
    Mn=y;
    Sec=z;
    }
void Show();
    ~Time() 
    {
    cout<<"\nDestructor Called";
    }
Time (Time &x,Time &y)
{
Hr=x.Hr+y.Hr;
Mn=x.Mn+y.Mn;
Sec=x.Sec+y.Sec;
}
};
int main()
{
Time Ob1;  
Ob1.Show();
Time Ob2(3,45,14); 
Ob2.Show();
Time Ob3(2,5,4);
Ob3.Show();
Time Ob4(Ob2,Ob3);
Ob4.Show();
Time *Ob5=new Time();
Ob5->Show();
Time *Ob6=new Time(4,44,55); 
Ob6->Show();
Time *Ob7=new Time(Ob2); 
Ob7->Show();
return 0;
} 
void Time::Show()
{
    while(Sec>=60)
    {
    Mn++;
    Sec-=60;
    }
    while(Mn>=60)
    {
    Hr++;
    Mn-=60;
    }
cout<<"\nTime="<<Hr<<":"<<Mn<<":"<<Sec;
}
