#include<iostream>

void showbalance(double &balance);
void withdrawmoney(double &balance);
void depositmoney(double &balance);


int main(){

   double balance=0;

   int choice;
   std::cout<<"***************************************\n";
   std::cout<<"****************FLASH BANK*************\n";
   std::cout<<"***************************************\n\n";


   do{
      std::cout<<"1. See Balanace \n"<<std::endl; 

      std::cout<<"2. Withdraw Money \n"<<std::endl;
   
      std::cout<<"3. Deposit Money \n"<<std::endl;
   
      std::cout<<"4.  exit \n\n";
     
      std::cout<<"So what you wanna do? \n";
   
      std::cin>>choice;
   switch (choice)
   {
   case 1:
     showbalance(balance);
    break;
    case 2:
    withdrawmoney(balance);

    break;
   
    case 3:
  depositmoney(balance);
    break;


   default:
    break;
   }

   }
   while(choice!=4);

    return 0;

}


void showbalance(double &balance){
   std::cout<<"Your balance:"<<balance<<"\n\n";
};

void withdrawmoney(double &balance){
   if(balance==0){
      std::cout<<"Sorry you have no balance in your account to withdraw\n";
  }
  else{
      double amount;
      std::cout<<"Enter the amount you want to withdraw\n";
      std::cin>>amount;
   if(amount>balance){
      std::cout<<"Sorry! You don't have this much money in your account :( \n\n";
   }
   else{
      balance=balance-amount;
      std::cout<<"Money withdrawal successful \n";
   }
  }


};
//pass by reference instead of value, pass by value only updates copied variable instead of original one
void depositmoney(double &balance){
   int amount;
   std::cout<<"Enter the amount to deposit:";
   std::cin>>amount;

   if(amount==0||amount<0){
    std::cout<<"Please Enter a valid amount! \n";

   }
   else{
      balance=balance+amount;
      std::cout<<"Money deposited to your account successfully :)\n";

   }
};
