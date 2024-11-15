#include<iostream>

using namespace std;

class Marvalous
{

public :
int No1;
int No2;

Marvalous()
{
    cout<<"Inside Default Constructor\n";
    No1=0;
    No2=0;
}

Marvalous(int A,int B)
{
    cout<<"Inside Parameterized Constructor\n";
    No1=A;
    No2=B;
}

 ~Marvalous()
 {
    cout<<"Inside structor\n";
 }


 void Fun()
 {
    cout<<"Inside Fun\n";
 }

};


int main()
{

Marvalous mobj;
Marvalous mobj1(1,2);



    return 0;
}