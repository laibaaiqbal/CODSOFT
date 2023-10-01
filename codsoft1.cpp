#include<iostream>
#include<cstdlib> //used to generate random numbers
#include<ctime> //used for different seeding each time

using namespace std;
int main()
{   cout<<"*******NUMBER GUESSING GAME*******"<<endl;
    srand((unsigned int)time(NULL));
    int number= (rand() %100 +1);
    int guess=0;
    do
    {
        cout<<"Enter guess"<<endl;
        cin>>guess;

        if(guess>number)
        cout<<"Oops! Guess a lower number."<<endl;

        else if(guess<number)
        cout<<"Oops! Guess a higher number."<<endl;

        else
        {cout<<"Congratulations! You guessed it right :)"<<endl;}
    } while (guess != number);
}

