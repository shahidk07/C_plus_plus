#include<iostream>

int main()
{
  double temp;
  char unit;

  std::cout<<"*******   Temperature Conversion *********\n";

  std::cout<<"F =Fahrenheit\n";
  std::cout<<"C= Celsius\n";

  std::cout<<"What unit would you like to convert \n";
  std::cin>>unit;

if(unit=='c' ||unit=='C'){
    std::cout<<"Enter the temperature in Fahrenheit \n";
    std::cin>>temp;

    temp=(temp-32)*5/9;
    std::cout<<"Temperature in Celsius is \n"<<temp;
}
else if(unit=='f'||unit=='F')
{

    std::cout<<"Enter the temperature in Celsius \n";
    std::cin>>temp;

    temp=temp*9/5+32;

    std::cout<<"Temperature in Fahrenheit is \n"<<temp;


}
else{
    std::cout<<"Invalid Response! \n";
}


    return 0;
}