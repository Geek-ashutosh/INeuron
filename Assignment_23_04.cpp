/*                      Assignment - 23
4. Write a C++ program to calculate the area of a circle
*/
#include<iostream>
using namespace std;

int main()
{
    //Radius of circle is in centimeter
    float pi = 3.14,rad = 7,area;
    area = pi*(rad * rad);
    cout<<"Area of circle is: "<<area<<"cm";
    
    return 0;
}