/*            Assignment - 23
8. Write a C++ program to swap values of two int variables without using third variable.
*/
#include<iostream>
using namespace std;

int main()
{ 
    int a = 7, b = 3;
    cout<<"Before Swapping the value of a and b is: "<<a<<" & "<<b<<endl;
    a = a - b;
    b = a + b;
    a = b - a;
        
    cout<<"After Swapping the value of a and b is: "<<a<<" & "<<b;

    
    return 0;
}