/* Question-1 Program to check Parenthesis using Stack */

#include <iostream>
using namespace std;

int top=-1; // global variable

void checking_parenthesis( char str1[15], int n, char stk[15]); // function in which we will perform the operation of stack to check expression 

void checking_parenthesis( char str1[15], int n, char stk[15]) // starting the function
{
    for(int i=0; i<n; i++) // for loop for traversing through the array of characters
    {
        if(str1[i] == '(') 
        {
            top++;
            stk[top]='(';
        }
        else if(str1[i] == '{' )
        {
            top++;
            stk[top]='{';
        }
        if(str1[i]==')' && stk[top]=='(' || str1[i]=='}' && stk[top]=='{')        
        {
            top--;
        }
    }
    if(top==-1)
    {
        cout<<"The expression is checked and balanced"<<endl;
    }
    else
    {
        cout<<"The Expression is not balanced"<<endl;
    }
} // function Ends

int main() // starting the main function
{
    char stack[15];
    char str[15];
    cout<<"Enter the expression "<<endl; // asking for the input of the function
    for(int i=0;i<15;i++)
    {
        cin>> str[i]; // entering the elements
    }
    cout<<"Displaying your entered expression"<<endl;
    for(int i=0;i<15;i++)
    {
        cout<<str[i];
    }
    cout<<endl;
    checking_parenthesis(str,15,stack); // passing into the function
    return 0;
} // program ends
