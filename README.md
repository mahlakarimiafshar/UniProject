# UniProject
THE DUZ GAME...
[duztry1.cpp](https://github.com/user-attachments/files/24934556/duztry1.cpp)
#include <iostream>
#include <ctime>
#include <cstdlib>
void GetRoomP1(char duz[3][3],char p1);
void GetRoomP2(char duz[3][3],char p2);
void GetComputerRoom(char duz[3][3], char computer);
void ShowScreen(char duz[3][3]);
bool ChooseWinner(char duz[3][3], char p1, char p2);
bool ChooseWinner1(char duz[3][3], char p1, char computer);
int main (){
    char choise = ' ';
while(choise !='p' && choise !='P'  && choise !='c' && choise !='C' ) {
    std::cout << "player w player(enter p) or player w computer(enter c)? ";
std::cin >> choise;
}
if (choise =='p' || choise=='P'){
    char p1,p2;
    std::cout << "\nEnter p1 symbol: ";
    std::cin >> p1;
    std::cout << "\nEnter p2 symbol: ";
    std::cin >> p2;
    char duz[3][3];
    for(int s=0; s<3; s++){
        for(int e=0; e<3; e++){
            duz[s][e] = ' ';
        }
    }
   for(int turn=0; turn<9; turn++){
    if (turn%2==0) {GetRoomP1(duz,p1);
        ShowScreen(duz);}
    else {GetRoomP2(duz,p2);
    ShowScreen(duz);}
    if (ChooseWinner(duz,p1,p2)){
        if(turn%2==0) std::cout << "Player 1 wins\n";
        else std::cout << "Player 2 wins\n";
        break;
    }
    if (turn==8 && ChooseWinner(duz,p1,p2)!=true) std::cout << "DRAW!!!";
   }
    
}
if (choise =='c'|| choise=='C'){
    char p1, computer='o';
    std::cout << "\n computer's symbol : o";
    std::cout << "\nok player, Enter your intended symbol: ";
    std::cin >> p1;
    char duz[3][3];
    for(int s=0; s<3; s++){
        for(int e=0; e<3; e++){
            duz[s][e] = ' ';
        }
}
for(int turn=0; turn<9; turn++){
    if (turn%2==0) {GetRoomP1(duz,p1);
        ShowScreen(duz);}
    else {
        std::cout << "\ncomputer's intended room :";
        GetComputerRoom(duz,computer);
        ShowScreen(duz);}
    if (ChooseWinner1(duz,p1,computer)){
        if(turn%2==0) std::cout << "YOU WIN:))_\n";
        else std::cout << "GAME OVER!!!\n";
        break;
    }
    if (turn==8 && ChooseWinner(duz,p1,computer)!=true) std::cout << "DRAW!!!";
}
}
    return 0;
}

void GetRoomP1(char duz[3][3],char p1){
    int i,j;
    do{ std::cout << "\nplayer1, enter your intended room :(0<=row<=2 ; 0<=column<=2) ";
        std::cin>>i>>j;
    }while(i<0 || i>2 || j<0 || j>2 || duz[i][j]!=' ');
    duz[i][j]=p1;
    std::cout << "\nPlayer1's room : (" << i << ',' << j << ')' << std::endl;
    
}
void GetRoomP2(char duz[3][3],char p2){
    int i,j;  
    do{ std::cout << "\nplayer2, enter your intended room :(0<=row<=2 ; 0<=column<=2) ";
        std::cin>>i>>j;
    }while(i<0 || i>2 || j<0 || j>2 || duz[i][j]!=' ');
    duz[i][j]=p2;
    std::cout << "\nPlayer2's room : (" << i << ',' << j << ')' << std::endl;
}
void GetComputerRoom(char duz[3][3], char computer){
    srand(time(NULL));
    int comp = rand()%3, comp2 = rand()%3;
    do{
         duz[comp][comp2] = computer;
    }while(duz[comp][comp2] == ' ');
    std::cout << "\nComputer's room : (" << comp << ',' << comp2 << ')' << std::endl;
    
}
void ShowScreen(char duz[3][3]){
    for(int x=0; x<3; x++){
        for ( int y=0; y<3; y++){
            std::cout << duz[x][y] << ' ';
        }
        std::cout << std::endl;
    }
}
bool ChooseWinner(char duz[3][3],char p1,char p2){
         if(duz[0][0]==p1 && duz[0][1]==p1 && duz[0][2]==p1) return true;
    else if(duz[1][0]==p1 && duz[1][1]==p1 && duz[1][2]==p1) return true;
    else if(duz[2][0]==p1 && duz[2][1]==p1 && duz[2][2]==p1) return true;
    else if(duz[0][0]==p1 && duz[1][0]==p1 && duz[2][0]==p1) return true;
    else if(duz[0][1]==p1 && duz[1][1]==p1 && duz[2][1]==p1) return true;
    else if(duz[0][2]==p1 && duz[1][2]==p1 && duz[2][2]==p1) return true;
    else if(duz[0][0]==p1 && duz[1][1]==p1 && duz[2][2]==p1) return true;
    else if(duz[0][2]==p1 && duz[1][1]==p1 && duz[2][0]==p1) return true;
    else if(duz[0][0]==p2 && duz[0][1]==p2 && duz[0][2]==p2) return true;
    else if(duz[1][0]==p2 && duz[1][1]==p2 && duz[1][2]==p2) return true;
    else if(duz[2][0]==p2 && duz[2][1]==p2 && duz[2][2]==p2) return true;
    else if(duz[0][0]==p2 && duz[1][0]==p2 && duz[2][0]==p2) return true;
    else if(duz[0][1]==p2 && duz[1][1]==p2 && duz[2][1]==p2) return true;
    else if(duz[0][2]==p2 && duz[1][2]==p2 && duz[2][2]==p2) return true;
    else if(duz[0][0]==p2 && duz[1][1]==p2 && duz[2][2]==p2) return true;
    else if(duz[0][2]==p2 && duz[1][1]==p2 && duz[2][0]==p2) return true;
    else return false;
}
bool ChooseWinner1(char duz[3][3], char p1, char computer){
             if(duz[0][0]==p1 && duz[0][1]==p1 && duz[0][2]==p1) return true;
    else if(duz[1][0]==p1 && duz[1][1]==p1 && duz[1][2]==1) return true;
    else if(duz[2][0]==p1 && duz[2][1]==p1 && duz[2][2]==p1) return true;
    else if(duz[0][0]==p1 && duz[1][0]==p1 && duz[2][0]==p1) return true;
    else if(duz[0][1]==p1 && duz[1][1]==p1 && duz[2][1]==p1) return true;
    else if(duz[0][2]==p1 && duz[1][2]==p1 && duz[2][2]==p1) return true;
    else if(duz[0][0]==p1 && duz[1][1]==p1 && duz[2][2]==p1) return true;
    else if(duz[0][2]==p1 && duz[1][1]==p1 && duz[2][0]==p1) return true;
    else if(duz[0][0]==computer && duz[0][1]==computer && duz[0][2]==computer) return true;
    else if(duz[1][0]==computer && duz[1][1]==computer && duz[1][2]==computer) return true;
    else if(duz[2][0]==computer && duz[2][1]==computer && duz[2][2]==computer) return true;
    else if(duz[0][0]==computer && duz[1][0]==computer && duz[2][0]==computer) return true;
    else if(duz[0][1]==computer && duz[1][1]==computer && duz[2][1]==computer) return true;
    else if(duz[0][2]==computer && duz[1][2]==computer && duz[2][2]==computer) return true;
    else if(duz[0][0]==computer && duz[1][1]==computer && duz[2][2]==computer) return true;
    else if(duz[0][2]==computer && duz[1][1]==computer && duz[2][0]==computer) return true;
    else return false;
}
