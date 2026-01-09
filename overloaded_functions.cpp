#include<iostream>

//you can have many versions of the same function with different parameters



void bakepizza();
void bakepizza(std::string topping1);
void bakepizza(std::string topping1,std::string topping2);

int main(){

bakepizza();
bakepizza("chicken","Mushroom");

return 0;

}
void bakepizza(){
    std::cout<<"Here is your pizza \n";
}

void bakepizza(std::string topping1){
    std::cout<<"Here is your "<<topping1<<" pizza \n";
}
void bakepizza(std::string topping1,std::string topping2){
    std::cout<<"Here is your "<<topping1<<" and "<<topping2<<" pizza \n";
}