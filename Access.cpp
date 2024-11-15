#include<iostream>

using namespace std;

class Demo
{
   public :
   int A;
   private :
   int B;

   public :
   Demo()
   {
    A=11;
    B=21;
   }

   void Fun()
   {
    cout<<"Value of A :"<<A<<"\n";
    cout<<"Value of B :"<<B<<"\n";
   }

};




int main()
{

Demo obj;
obj.Fun();
cout<<"Value of A:"<<A<<"\n";
cout<<"Value of B:"<<B<<"\n";

    return 0;
}