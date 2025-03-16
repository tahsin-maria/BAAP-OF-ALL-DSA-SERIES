//Take input of principle, time and rate and find the simple interest

#include<iostream>
using namespace std;
int main()
{
    float p,t,r;
    cin >>p>>t>>r;
    float si = (p*t*r)/100;
    cout << "Simple Interest: " << si << endl;
}


