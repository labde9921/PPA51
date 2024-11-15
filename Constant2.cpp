#include<iostream>
using namespace std;

class Demo
{
  public :
  int No1,No2;
  const int No3=90;
  const int No4=80;

  Demo() : No3(30),No4(40)
  {
    No1=10;
    No2=20;
  
  }
  Demo()
  {
    
  }



};

int main()
{

Demo obj;

cout<<"Demo :"<<"\t" <<obj.No1;
cout<<"Demo :"<<"\t" <<obj.No2;
cout<<"Demo :"<<"\t" <<obj.No3;
cout<<"Demo :"<<"\t" <<obj.No4;

    return 0;
}