#include <iostream>
//switch is used when we donot want many if else if else statements
//compare one value against matching cases


int main() {

int month;
std::cout<<"Enter the month (1-12): ";
std::cin>>month;

switch(month){
    case 1:
    std::cout<<"This is january"<<'\n';
    break;
    
    case 2:
    std::cout<<"This is February"<<'\n';
    break;

    case 3:
    std::cout<<"This is March"<<'\n';
    break;
    
    case 4:
    std::cout<<"This is april"<<'\n';
    break;

    case 5:
    std::cout<<"This is May"<<'\n';
    break;

    case 6:
    std::cout<<"This is June "<<'\n';
    break;

    case 7:
    std::cout<<"This is July"<<'\n';
    break;

    case 8:
    std::cout<<"This is August"<<'\n';
    break;

    case 9:
    std::cout<<"This is September"<<'\n';
    break;

    case 10:
    std::cout<<"This is October"<<'\n';
    break;

    case 11:
    std::cout<<"This is November"<<'\n';
    break;

    case 12:
    std::cout<<"This is December"<<'\n';
    break;
    
};

return 0; 
}