#include<iostream>
#include<ctime>
  //this program is for generating random game prizes
int main(){

srand(time(0));

int random=rand()%7+1;

switch (random)
{
case 1:
    /* code */
    std::cout<<"You won RDR 2 game";
    break;
    case 2:
    /* code */
    std::cout<<"You won Assassin's Creed Valhalla game";
    break;
    case 3:
    /* code */
    std::cout<<"You won GTA V game";
    break;
    case 4:
    /* code */
    std::cout<<"You won Ghost of Tshushima game";
    break;
    case 5:
    /* code */
    std::cout<<"You won Elden Rings game";
    break;
    case 6:
    /* code */
    std::cout<<"You won Arkham Knight game";
    break;
    case 7:
    /* code */
    std::cout<<"You won Expedition 33:Clair Obscur game";
    break;




default:
    break;
}



    return 0;
}