//Write a program to find the sum of squares of first n natural numbers where n will be provided by the user

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    long long int sum=0;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        sum=sum+pow(i,2);
    }
    cout<<sum<<endl;
}
