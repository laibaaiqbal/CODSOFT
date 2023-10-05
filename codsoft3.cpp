#include <iostream>
using namespace std;
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}}; //creating an array
//declaring variables
int turn; 
int row,column;
char sign= 'X';
bool draw= false;
string player1, player2;

//creating a function which displays the board
void FunctionOne()
{   
    cout<<"     |     |     "<<endl;
    cout<<"  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<" "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<" "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<" "<<endl;
    cout<<"     |     |     "<<endl<<endl;
}

//creating a function to take input, which updates the board
void FunctionTwo()
{
    if(sign== 'X')
        {cout<<player1<<"'s turn : ";}
    else if(sign== 'O')
        {cout<<player2<<"'s turn : ";}
    cin>>turn;

    switch(turn)
    {
        case 1: row=0; column=0; 
        break;
        case 2: row=0; column=1; 
        break;
        case 3: row=0; column=2; 
        break;
        case 4: row=1; column=0; 
        break;
        case 5: row=1; column=1; 
        break;
        case 6: row=1; column=2; 
        break;
        case 7: row=2; column=0; 
        break;
        case 8: row=2; column=1; 
        break;
        case 9: row=2; column=2; 
        break;
        default:
            {cout<<"Invalid move, try again"<<endl;}
    }

    if(sign== 'X' && board[row][column]!= 'X' && board[row][column]!= 'O')
        {board[row][column]= 'X';
        sign= 'O';}
    else if(sign== 'O' && board[row][column]!= 'X' && board[row][column]!= 'O')
        {board[row][column]= 'O';
        sign= 'X';}
    else
     {cout<<"The space is already taken, try again!"<<endl;
     FunctionTwo();}
}

//creating a function to check who won or to check if it's a draw
bool FunctionThree(){
    //for rows and coumns
    for(int i=0; i<3; i++)
    if(board[i][0]== board[i][1] && board[i][0]== board[i][2] || board[0][i]== board[1][i] && board[0][i]== board[2][i])
    return false;
    //for diagonals
    if(board[0][0]== board[1][1] && board[0][0]== board[2][2] || board[0][2] == board[1][1] && board[0][2]== board[2][0])
    return false;
    //checking the game continuation
    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    if(board[i][j]!= 'X' && board[i][j]!= 'O')
    return true;
    //Checking if it's a draw
    draw = true;
    return false;
}

int main()
{
    cout<<"*********TIC-TAC-TOE*********"<<endl;
    cout<<"Enter the name of first player :";
    cin>>player1;
    cout<<"Enter the name of second player :";
    cin>>player2;
    cout<<player1<<" VS "<<player2<<" starts now!"<<endl<<"Mark according to the numbers shown..."<<endl;
    
    while(FunctionThree())
    {
        FunctionOne();
        FunctionTwo();
        FunctionThree();
    }
    if(sign== 'X' && draw== false)
    {FunctionOne();
    cout<<"Congratulations! "<<player2<<" has won the game.";}
    else if(sign== 'O' && draw== false)
    {FunctionOne();
    cout<<"Congratulations! "<<player1<<" has won the game.";}
    else
    {FunctionOne();
    cout<<"Oops! It's a draw..."<<endl;}
    return 0; 
} 