#include<iostream>
#include <string>
#include <cctype>
//isdigit() method of cctype checks if the number is a digit or not

int main(){

    std::string ops="5+10";

    for (int i=0;i<ops.length();i++){

    if(isdigit(ops[i])){
        float current_num=0;

        while(isdigit(ops[i]) && i<ops.length()){
            current_num=(current_num*10) + (ops[i]-'0');
            /*
            in c++ strings -the numbers or symbols are stored in ASCII values and ASCII value of '0' is 48
            and for 1 is 49 and similarly so if you subtract 48 from ASCII value of any number you get the actual number
            instead of string
            */
            
            i++;
        }
    i--;
    /*
    we are subtracting one index because before while loop terminated it incremented i for non digit values on time.
    and since for loop also increments i so it will cause error for operators.
    */
        std::cout<<current_num<<" is a digit"<<'\n';
    }

    else{
        std::cout<<ops[i]<<" is an operator"<<'\n';
    }    

    }

    return 0;
}