#include<stdio.h>

int main()
{

  int Price[]={69,85,66,89,55,77};

  printf("%d\n",Price[0]);
  printf("%d\n",Price[2]);
  printf("%d\n",Price[5]);

  printf("%lu\n",sizeof(Price));
  printf("%lu\n",sizeof(Price[1]));
  printf("%lu\n",Price[5]);




    return 0;
}