#include<iostream>


// program begins from main function
int main() {
    //std::cout cout c means character out means output  ,mens standard character output


int age;


std::string name;
std::cout<<"\n What's your age?:";
std::cin>>age;
std::cout<<"What's your name?: ";
std::getline(std::cin>>std::ws,name);


std::cout<<"Hello "<<name<<'\n';
std::cout<<"You are "<<age<<" years old"<<'\n';



return 0; //return 0 means no problems in this program
//if you return 1 or something else in the main function it means there is a problem in the main function
}