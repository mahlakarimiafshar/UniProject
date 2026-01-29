#include <iostream> 
#include <cstdlib>
#include <ctime>

int main () {
    int num;
    int shot = 4;
    int guess;

    srand(time(NULL));
    num = (rand() % 20) + 1;
   
    std::cout << "*** NUMBER GUESSING GAME ***\n\n\n";
    std::cout << " Enter a guess between 1-20\n";
    
    do {
      
      std::cout << "you only have " << shot << " shots!\n";
      std::cin >> guess;
      shot--;
      if ( guess > num ){
        std::cout << " too high\n ";
      }
      else if ( guess < num ) {std::cout << " too low\n";}
      if ( shot == 0 ) {
        break;
      }

    

    } while ( guess != num);

    if ( guess == num) {
        std::cout << "U WIN";
    }

    else std::cout << " WRONG NUMBER";
    std::cout << "\nthe answer was: " << num;
    



    return 0;
}