----------  

## **Problem No : 01**  

## **Problem Name : Print all the odd numbers from 1 to 100.**  

----------  

## **Code :**  
```C++  
#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    }
    

}
```  

----------  

## **Problem No : 02**  

## **Problem Name : Print all numbers from 1 to 100 that are divisible by 3.**  

----------  

## **Code :**  
```C++  
#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%3==0)
        {
            cout<<i<<endl;
        }
    }
    

}

```  

----------  

## **Problem No : 03**  

## **Problem Name : Display this AP - 4,7,10,13,16.. up to ‘n’ terms.**  

----------  

## **Code :**  
```C++  
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 4;
    while (n--)
    {
        if (n < 1)
        {
            cout << i;
        }
        else
        {
            cout << i << ",";
        }
        i += 3;
    }
}
```  

----------  

## **Problem No : 04**  

## **Problem Name : Display this GP - 3,12,48,.. up to ‘n’ terms.**  

----------  

## **Code :**  
```C++  
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 3;
    while (n--)
    {
        if (n < 1)
        {
            cout << i;
        }
        else
        {
            cout << i << ",";
        }
        i *= 4;
    }
}
```  

----------  

## **Problem No : 05**  

## **Problem Name : Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.**  

----------  

## **Code :**  
```C++  
#include <iostream>
using namespace std;
int main()
{
    char cha = 'A';
    char ch = 'a';
    while (cha != 'Z')
    {
        cout << cha << "-" << (int)cha <<" , "<< ch << "-" << (int)ch << endl;
        cha++;
        ch++;
    }
}
```  

----------  

## **Problem No : 06**  

## **Problem Name : Write a program to take an integer n as input and print numbers from n to 1 using a loop.**  

----------  

## **Code :**  
```C++  
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {

        cout << i << endl;
    }
}
```  

----------  

## **Problem No : 07**  

## **Problem Name : Write a C++ program to take an integer n as input and print the sum of the first n natural numbers using a loop.**  

----------  

## **Code :**  
```C++  
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int sum=0;
    for (int i = 1; i <= n; i++)
    {

        sum+=i;
    }
    cout << sum << endl;
}
```  

----------  

