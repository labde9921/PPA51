#include<iostream>

using namespace std;

class Base
{
  public :
  int i;
  private :
  int j;
  protected :
  int k;
  public Base()
  {
    i=10;
    j=20;
    k=30;
  }
   void Gun()
  {
    cout<<j<<"\n";
    cout<<j<<"\n";
    cout<<k<<"\n";
  }

};

clas Derived 
{
  public :
  void fun()
  {
    cout<<j<<"\n";
    cout<<j<<"\n";
    cout<<k<<"\n";
  }

};




int main()
{
 Base bobj;
 cout<<bobj.i<<"\n";
 cout<<bobj.j<<"\n";
 cout<<bobj.k<<"\n";




    return 0;
}