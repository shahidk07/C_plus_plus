#include<iostream>

//isdigit() method of cctype checks if the number is a digit or not

int main(){
std::string name;
std::cout<<"Enter your name \n";
std::getline(std::cin,name);



// name.clear();
std::cout<<(name.length()>13?"Your name cannot be over 13 characters":name.empty()?
"You didn't entered your name":"Welcome "+ name)<<"\n";

// std::cout<<name.at(0)<<"\n";
std::cout<<name.find(' ')<<"\n";
name.erase(0,3);
name.insert(0,"@");
// name.append("@gmail.com");
std::cout<<"Your username is "+name+"\n";


    return 0;
}