#include<iostream>


int main(){
  

    int n;
    srand(time(NULL));
    n=(rand()%100+1);
    int guess;
    int attempt;

  std::cout<<"*******Guess the Number between 1-100*******\n \n";
  std::cin>>guess;

   do{
    std::cout<<"Enter your guess\n";
    std::cin>>guess;
    if(guess>n){
        std::cout<<"Too high\n";

    }
    else if(guess<n){
        std::cout<<"Too low\n";

    }
    else{
        std::cout<<"Correct\n";

    }
    attempt++;
   }
   while(n!=guess);



    return 0;
}