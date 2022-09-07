/*             Assignmemt - 23
10. Write a C++ program to add all the numbers of an array of size 10.
*/
#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int result = 0;
    for(int i = 0; i <= 9; i++)
    {
        result = result + arr[i] ;
    }
    cout<<"Addition of all numbers is: "<<result<<endl;
     
    return 0;
}
