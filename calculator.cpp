#include<iostream>


double result;

int main(){



std::string ops;
std::cout<<"Type your calculations";
std::cin>>ops;
double result;

double current_number=0;
for(int i=0;i<ops.length();i++)

if(isdigit(ops[i])){
{
  while(isdigit(ops[i]))
 current_number=(current_number*10)+(ops[i]-'0');
}

}


  return 0;
}