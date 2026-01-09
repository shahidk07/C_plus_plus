#include<iostream>

int main(){


    //a for loop can do the same thing but it's just longer syntax but for loop provides more flexibility 
    //you cannot do backwards in for each
  std::string students[]={"Shahid","Shuayb","Shahriyaar"};
  
  for(std::string student:students){
    std::cout<<student<<'\n';
  }

    return 0;
}