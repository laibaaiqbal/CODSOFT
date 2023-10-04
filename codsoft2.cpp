#include<iostream>
using namespace std;
int main()
{   cout<<"********SIMPLE CALCULATOR*********"<<endl;
    double number_1, number_2, answer;
    char op;
    char again='Y';
    //cout<<"********SIMPLE CALCULATOR*********"<<endl;
    while(again=='y' || again=='Y')
    {{cout<<"Enter an expression (number1, operator, number2)"<<endl;
    cin>>number_1>>op>>number_2;

   if (op == '+')
    {answer = number_1 + number_2;} 
   else if (op == '-') 
   {answer = number_1 - number_2;}
   else if (op == '*') 
   {answer = number_1 * number_2;}
   else if (op == '/') 
   {if (number_2 == 0)
   {cout<<"Error! Division by zero is infinty."<<endl;}
   answer = number_1 / number_2;}
   else
   {cout<<"Invalid Expression.Try again!";
   return 1;}
   cout<<"Result: "<<answer<<endl;}}
   return 0;
}