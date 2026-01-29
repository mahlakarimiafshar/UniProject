#include <iostream>
#include <cstdlib>
#include <ctime>
int main () {
int x;
srand(time(NULL));

std::cout << "\n\n\n **** ROCK, PAPPER, SCISSOR **** \n\n";

 
int random = rand() % 3;
int user=0;
int computer=0;
char y;
    

do{

    std::cout << " Alright choose an item ( 0 = rock, 1 = paper, 2 = scissor ) : ";
std::cin >> x;
    


    if (random == 0 ) {
        
        std::cout << "I chose ROCK\n";
        if ( x == 1 ){ 
           std::cout << "you choose : PAPER\n";
           std::cout << " YOU WIN:( ";
           user++;
           std::cout << "\n my point : " << computer;
           std::cout << "\n your point : " << user;
           std::cout << "\n CONTINUE? (yes= y, no = n)";
           std::cin >> y;
        }
        else if( x == 2) {
           std::cout << "you choose : SCISSOR\n";
           std::cout << " I WIN :) ";
           computer++;
           std::cout << "\n my point : " << computer;
           std::cout << "\n your point : " << user;
           std::cout << "\n CONTINUE? (yes= y, no = n)";
           std::cin >> y;}
    }
    else if ( random == 1) {
        std::cout << "I chose PAPER\n";
        if( x == 0){
            std::cout << "you choose : ROCK\n";
            std::cout << " I WIN :) ";
            computer++;
            std::cout << "\n my point : " << computer;
            std::cout << "\n your point : " << user;
            std::cout << "\n CONTINUE? (yes= y, no = n)";
            std::cin >> y;
        }
        else if ( x == 2 ) {
             std::cout << "you choose : SCISSOR\n";
             std::cout << " YOU WIN:( ";
             user++;
             std::cout << "\n my point : " << computer;
             std::cout << "\n your point : " << user;
             std::cout << "\n CONTINUE? (yes= 1, no = y)";
             std::cin >> y;
        }
    }
    else {
        std::cout << "I chose SCISSOR \n";
        if ( x == 0 ) {
            std::cout << "you choose : ROCK\n";
            std::cout << " YOU WIN:( ";
            user++;
            std::cout << "\n my point : " << computer;
            std::cout << "\n your point : " << user;
            std::cout << "\n CONTINUE? (yes= y, no = n)";
            std::cin >> y;
        }
        else if ( x == 1) {
            std::cout << "you choose : PAPER\n";
            std::cout << " I WIN :) ";
            computer++;
            std::cout << "\n my point : " << computer;
            std::cout << "\n your point : " << user;
            std::cout << "\n CONTINUE? (yes= y, no = n)";
            std::cin >> y;
        }
    }

    
    }   while ( y == 'y' || y == 'Y');

    if ( user > computer) {
        std::cout << "\n OK, i'm cooked, CONGRATS!!!  ";
    }
    else if (computer >  user) std::cout << " \n HAHAHA GAME OVER!!! I WON  ";

    else std::cout << "\n We're EQUAL!";
    
    
return 0;
}