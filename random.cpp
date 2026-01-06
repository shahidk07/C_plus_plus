#include<iostream>

 int main(){

  //pseudo random ==not truly random

//we seed the random number generator with something that changes 

srand(time(NULL));

//rolling three dices
  int num1 =(rand() %6 +1);
  int num2 =(rand() %6 +1);
  int num3 =(rand() %6 +1);

std::cout<<num1<<"\n";
std::cout<<num2<<"\n";
std::cout<<num3<<"\n";
    return 0;

 }