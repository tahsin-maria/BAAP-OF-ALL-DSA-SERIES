----------  

## **Problem No : 01**  

## **Problem Name : Take 2 integers input and print the greatest of them.**  

----------  

## **Code :**  
```C++  
#include<iostream>

using namespace std;
int main()
{
    int a,b;
    cin >>a>>b;
   (a > b) ? cout << a : cout << b;
}

```  

----------  

## **Problem No : 02**  

## **Problem Name : Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.**  

----------  

## **Code :**  
```C++  

#include<iostream>

using namespace std;
int main()
{
    float r;
    cin >>r;
    float area=3.14*r*r;
    float c=2*3.14*r;
   (area > c) ? cout << "Yes" : cout << "NO";
}

```  

----------  

## **Problem No : 03**  

## **Problem Name : Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years).**  

----------  

## **Code :**  
```C++  
#include<iostream>

using namespace std;
int main()
{
    int y;
    cin >>y;
     if((y%4==0 && y%100!=0) || (y%400==0)){
        cout << y << " is a leap year.";
     }
     else{
        cout << y << " is not a leap year.";
     }
  
}

```  

----------  

## **Problem No : 04**  

## **Problem Name : Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.**  

----------  

## **Code :**  
```C++  
#include<iostream>

using namespace std;
int main()
{
    float l,b;
    cin >>l>>b;
    float p=2*(l+b);
    float area=l*b;
    (area > p)? cout<<"Yes" : cout<<"No"<<endl;
  
}

```  

----------  

## **Problem No : 05**  

## **Problem Name : Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.**  

----------  

## **Code :**  
```C++  
#include<iostream>

using namespace std;
int main()
{
    float a,b,c;
    cin >>a>>b>>c;
    if(a==b && b==c)
    {
        cout << "Equilateral "  << endl;
    }
    else if(a==b || b==c || a==c)
    {
        cout << "Isosceles " << endl;
    }
    else
    {
        cout << "Scalene " << endl;
    }
    
}

```  

----------  

## **Problem No : 06**  

## **Problem Name : If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks.**  

----------  

## **Code :**  
```C++  
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        if (b > c)
        {
            cout << "C";
        }
        else
        {
            cout << "B";
        }
    }
    else if (b > a && b > c)
    {
        if (a > c)
        {
            cout << "C";
        }
        else
        {
            cout << "A";
        }
    }
    else
    {
        if (a > b)
        {
            cout << "B";
        }
        else
        {
            cout << "A";
        }
    }
}
```  

----------  

## **Problem No : 07**  

## **Problem Name : Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).**  

----------  

## **Code :**  
```C++  
#include <iostream>
using namespace std;
int main()
{
    float x,y;
    cin >> x >> y;
    if (x==0)
    {
        cout<<"y-axis";
    }
    else if (y==0)
    {
        cout<<"x-axis";
    }
    else if(x==0 && y==0)
    {
        cout<<"origin";
    }
}
```  

----------  

## **Problem No : 08**  

## **Problem Name : Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.**  

----------  

## **Code :**  
```C++  
#include <iostream>
using namespace std;
int main()
{
    float x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
   float m1=(y2-y1)/(x2-x1);
    float m2=(y3-y2)/(x3-x2);
    if(m1==m2)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

```  

----------  

## **Problem No : 09**  

## **Problem Name : Write a C++ program to input any character and check whether it is the alphabet, digit or special character.**  

----------  

## **Code :**  
```C++  
#include <iostream>
using namespace std;
int main()
{
    char x;
    cin >> x;
  
    if(x>='A' && x<='Z'|| x>='a' && x<='z')
    {
        cout<<"alphabet";
    }
    else if(x>='0' && x<='9')
    {
        cout<<"number";
    }
    else{
        cout<<"special character";
    }
    
}
```  

----------  

## **Problem No : 10**  

## **Problem Name : Predict the output.**  

----------  

## **Output:**  
``` 
value of b and c are respectively  and 200
```  

----------  
## **Problem No : 11**  

## **Problem Name :  The minimum angle between hour and minute hand when the time is 9 angle is 90 degress.**  

----------  

## **Code :**  
```C++  
#include <iostream>
using namespace std;
int main()
{
    cout<<(360/12)*3;
    

}
```  

----------  
## **Problem No : 12**  

## **Problem Name : Write a menu-driven program.a) Cm to ft b) Km to miles c) USD to INR d) Exit**  

----------  

## **Code :**  
```C++  
#include <iostream>
using namespace std;

int main() {
    int choice;
    double value;

    do {
        cout << "Menu:\n";
        cout << "1) Cm to Ft\n";
        cout << "2) Km to Miles\n";
        cout << "3) USD to INR\n";
        cout << "4) Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter cm: ";
                cin >> value;
                cout << "Feet: " << value / 30.48 << endl;
                break;
            case 2:
                cout << "Enter km: ";
                cin >> value;
                cout << "Miles: " << value * 0.621371 << endl;
                break;
            case 3:
                cout << "Enter USD: ";
                cin >> value;
                cout << "INR: " << value * 83.0 << endl;
                break;
            case 4:
                cout << "Exit\n";
                break;
        }
    } while (choice != 4);

}

```  

----------  
## **Problem No : 13**  

## **Problem Name : Convert Case Using ASCII Values.**  

----------  

## **Code :**  
```C++  
#include <iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c>=65 && c<=91)
    {
        cout<<char(c+32);
    }
    else if(c>=97 && c<=122)
    {
        cout<<char(c-32);
    }
    

}
```  

----------  
## **Problem No : 14**  

## **Problem Name : Predict the output.**  

----------  

## **Output :**  
```C++  
Hello
```  

----------  
## **Problem No : 15**  

## **Problem Name : Predict the output.**  

----------  

## **Output :**  
```C++  
Hello
```  

----------  
## **Problem No : 16**  

## **Problem Name : Predict the output.**  

----------  

## **Output :**  
```C++  
Hello
```  

----------  
## **Problem No : 17**  

## **Problem Name : Predict the output.**  

----------  

## **Output :**  
```C++  
hello
```  

----------  
