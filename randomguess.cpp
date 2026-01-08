#include<iostream>
#include<limits>
//needed for numeric limits

int main(){
  

    int n;
    srand(time(NULL));
    n=(rand()%100+1);
    int guess;
    int attempt=0;

  std::cout<<"\n*******Guess the Number between 1-100*******\n \n";

   do{
    std::cout<<"Enter your guess\n";
    std::cin>>guess;

    if(std::cin.fail()){
        std::cin.clear();
        //this clear the error state or flag


        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
       /* This clears the input buffer and cin.ignore() takes two argument
       1.How many characters to skip -here it is maximum characters of the nput
       2. What character to stop at -here it is \n new line
       
       */
      std::cout<<"Invalid Input! Please enter a number\n\n";
       continue;
       //skip rest of the loop and start over
    };
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

   std::cout<<"Attempts took:"<<attempt<<"\n";

    return 0;
}