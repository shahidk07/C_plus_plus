#include<iostream>

int main(){
//ternary operators are replacement of if-else



    int mark;
    std::cout<<"Enter your mark"<<'\n';
    std::cin>>mark;


    mark>40?std::cout<<"You are passed"<<'\n':std::cout<<"You are failed"<<'\n';


    mark%2 ==0?std::cout<<"Even":std::cout<<"Odd"<<'\n';

    bool hungry=true;
    // hungry?std::cout<<"Your are hungry"<<'\n':std::cout<<"You are fu;ll"<<'\n'
;


//another way of using ternary operators
std::cout<<(hungry?"You are hungry":"You are full");
    return 0;
}