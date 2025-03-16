//Write a program to find the euclidean distance between two coordinates.Take both the coordinates from the user as input
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    cout<<"Enter coordinate no 1:" ;
    cin >>x1>>y1 ;
    cout<<"Enter coordinate no 2:" ;
    cin >>x2>>y2 ;
    cout << sqrt(pow((x2-x1),2)+pow((y2-y1),2)) <<endl;
}
