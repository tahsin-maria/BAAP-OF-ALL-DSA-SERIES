//Take two numbers as input and perform addition, subtraction, multiplication, and division. Display the results
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"addition: "<<a+b<<endl;
    cout<<"subtraction: "<<a-b<<endl;
    cout<<"multiplication: "<<a*b<<endl;
    if(b!=0)
    cout<<"division: "<<a/b<<endl;
    else
    cout<<"division by zero";
}
