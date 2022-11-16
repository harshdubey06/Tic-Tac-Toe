#include<iostream>
using namespace std;
char square[9]= {'0', '1', '2', '3', '4', '5', '6','7','8' };
char player = 'X';

void board()
{
   system("cls");//function used to clar the screen ;
    cout<< "|******************************************|"<<endl;
    cout<< "|*       O )  TIC TAC TOE GAME  ( O       *|"<<endl;
    cout<< "|******************************************|"<<endl;
    cout<< endl;
    cout<< " Player One will be X | Player Two will be O "<<endl;
    cout<< "   "<< " | "<< "   "<< "|"<< "   "<<endl;
    cout<< " "<<square[0]<<"  | "<< " "<<square[1]<<" | "<<" "<<square[2]<<" "<<endl;
    cout<< "____|____|____"<<endl;
    cout<< "    |    |    "<<endl;
    cout<< " "<<square[3]<<"  | "<< " "<<square[4]<<" | "<<" "<<square[5]<<" "<<endl;
    cout<< "____|____|____"<<endl;
    cout<< "    |    |    "<<endl;
    cout<< " "<<square[6]<<"  | "<< " "<<square[7]<<" | "<<" "<<square[8]<<" "<<endl;
    cout<< "    |    |    "<<endl;
}
void input(){
    int a;
    cout<< "Enter the box no.";
    cin>>a;
    if (a == 0)
       square[0] = player ;
    else if (a == 1)
       square[1]=player;
    else if (a == 2)
       square[2]=player;
    else if (a == 3)
       square[3]=player;
    else if (a == 4)
       square[4]=player;   
    else if (a == 5)
       square[5]=player;
    else if (a == 6)
       square[6]=player;
    else if (a == 7)
       square[7]=player;
    else if (a == 8)
       square[8]=player;
}
void toggle_player(){
    if (player == 'X')/* we know that default value of player is X so first player will be X and second will be O and now after zero again player 
                        one will be in roll */
    player = 'O';
    else 
    player = 'X';
}

char win(){
    // wining conditions for player 1;
    if (square[0]=='X' && square[1]=='X' && square[2]=='X')
    return 'X';
    if (square[3]=='X' && square[4]=='X' && square[5]=='X')
    return 'X';
    if (square[6]=='X' && square[7]=='X' && square[8]=='X')
    return 'X';
    if (square[0]=='X' && square[3]=='X' && square[6]=='X')
    return 'X';
    if (square[1]=='X' && square[4]=='X' && square[7]=='X')
    return 'X';
    if (square[2]=='X' && square[5]=='X' && square[8]=='X')
    return 'X';
    if (square[0]=='X' && square[4]=='X' && square[8]=='X')
    return 'X';
    if (square[2]=='X' && square[4]=='X' && square[6]=='X')
    return 'X';
    // wining conditions for player 2;
        if (square[0]=='O' && square[1]=='O' && square[2]=='O')
    return 'O';
    if (square[3]=='O' && square[4]=='O' && square[5]=='O')
    return 'O';
    if (square[6]=='O' && square[7]=='O' && square[8]=='O')
    return 'O';
    if (square[0]=='O' && square[3]=='O' && square[6]=='O')
    return 'O';
    if (square[1]=='O' && square[4]=='O' && square[7]=='O')
    return 'O';
    if (square[2]=='O' && square[5]=='O' && square[8]=='O')
    return 'O';
    if (square[0]=='O' && square[4]=='O' && square[8]=='O')
    return 'O';
    if (square[2]=='O' && square[4]=='O' && square[6]=='O')
    return 'O';

    return 'p';
}


int main(){
   while(1){
        board();
        input();
        toggle_player();
        if (win()=='X'){
            cout<< "*********************"<<endl;
            cout<< "** Player One Wins** "<<endl;
            cout<< "*********************"<<endl;
            break; //for jumping out of the while loop;
        }
        else if(win()=='O') {
              
            cout<< "*********************"<<endl;
            cout<< "**Player Second Wins*"<<endl;
            cout<< "*********************"<<endl;
            break;//for jumping out of the while loop;
        }
   }
   system("pause");
   return 0;
}