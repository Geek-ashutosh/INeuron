/*                Assignment - 23
9. Write a C++ program to find the maximum of two numbers.
*/
#include<iostream>
using namespace std;

int main()
{ 
    int a,c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>c;
    if (a > c)
    {
        cout<<"Max is: "<<a<<endl;
    }
    else
    {
        cout<<"Max is: "<<c<<endl;
    }
    
    
    return 0;
}