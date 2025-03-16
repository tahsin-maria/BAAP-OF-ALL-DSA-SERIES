//Given 2 fractions, find the sum of those 2 fractions.Take the numerator and denominator values of the fractions from the user.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >>a>>b>>c>>d;
    cout << (a*d+b*c) <<"/"<<(b*d)<<endl;
}
