

---

## **Problem No : 01**  

## **Problem Name : Predict the output.**  

---

## **Output :**  
```C++  
Prints "In while loop" infinite times
```  

---

----------  


## **Problem No : 02**  

## **Problem Name : Predict the output.**  

---

## **Output :**  
```C++  
syntax error
```  

---

----------  

## **Problem No : 03**  

## **Problem Name : Predict the output.**  

---

## **Output :**  
```C++  
In for loop
In for loop
In for loop
```  

---

----------  

## **Problem No : 04**  

## **Problem Name : Predict the output.**  

---

## **Output :**  
```C++  
9 1
8 2
7 3
6 4
5 5
```  

---
----------  

## **Problem No : 05**  

## **Problem Name : WAP to print the sum of all the even digits of a given number.**  

----------  

## **Code :**  
```C++
#include <iostream>  
using namespace std;  

int main() {  
    int num, sum = 0;  
    cin >> num;  

    while (num > 0) {  
        int digit = num % 10;  
        if (digit % 2 == 0) {  
            sum += digit;  
        }  
        num /= 10;  
    }  

    cout << sum << endl;  
    
}  

```  

----------  

## **Problem No : 06**  

## **Problem Name : WAP to print the sum of a given number and its reverse.**  

----------  

## **Code :**  
```C++
#include <iostream>
using namespace std;
int main()
{
    int n,r=0;
    cin >> n;
    long long int sum=0;
    int s=n;
    while(s)
    {
        r=r*10+s%10;
        s/=10;
    }
    sum=r+n;
    cout << sum << endl;
}  
```  

----------  

## **Problem No : 07**  

## **Problem Name : Print the factorials of first ‘n’ numbers Sample\nInput: 10\nOutput:\n1\n2\n6\n24\n120\n720\n5040\n40320\n362880\n3628800**  

----------  

## **Code :**  
```C++
#include <iostream>
using namespace std;
int main()
{
    int n, r = 0;
    cin >> n;
    long long int fact = 1;
    int s = 1;
    while (s != n)
    {
        fact = fact * s;
        cout << fact << endl;
        s++;
    }
}
```  

----------  

## **Problem No : 08**  

## **Problem Name : Find the sum of the series upto n terms.\nWrite a program to calculate the sum of series up to n term. For example, if n =5\nthe series will become 2 + 22 + 222 + 2222 + 22222 = 24690. Take the user input\nand then calculate. And the output style should match which is given in the\nExample. Input: 5\nOutput: Sum of above series is: 24690**  

----------  

## **Code :**  
```C++  
```  

----------  

## **Problem No : 09**  

## **Problem Name : Write a program to print all the unique combinations of 1,2,3 and 4\n1 2 3 4\n1 2 4 3\n1 3 2 4\n1 3 4 2\n1 4 2 3\n1 4 3 2\n2 1 3 4\n2 1 4 3\n2 3 1 4\n2 3 4 1\n2 4 1 3\n.\n.\nand so, on\nwww.alphaintern.in**  

----------  

## **Code :**  
```C++  
```  

----------  

## **Problem No : 10**  

## **Problem Name : Write a program that will take 2 numbers as input and prints the LCM and HCF\nof those 2 numbers.**  

----------  

## **Code :**  
```C++  
```  

----------  

## **Problem No : 11**  

## **Problem Name : Display Fibonacci series up to 10 terms.\nNote: The Fibonacci Sequence is a series of numbers. The next number is found by adding up\nthe two numbers before it. The first two numbers are 0 and 1. For example, 0, 1, 1, 2, 3, 5, 8,\n13, 21. The next number in this series above is 13+21 = 34.**  

----------  

## **Code :**  
```C++
#include <iostream>
using namespace std;
int main()
{
    int n = 10, fast = 1, slow = 0;
    long long int s = 1;
    for (int i = 1; i <= n; i++)
    {

        cout << slow << " ";
        fast = slow + fast;
        slow = fast - slow;
    }
}
```  

----------  

## **Problem No : 12**  

## **Problem Name : Reverse a given integer number\nInput: 76542\nOutput: 24567**  

----------  

## **Code :**  
```C++
#include <iostream>
using namespace std;
int main()
{
    int n,r=0;
    cin >> n;
   
    int s=n;
    while(s)
    {
        r=r*10+s%10;
        s/=10;
    }
    cout << r << endl;
}
```  

----------  

## **Problem No : 13**  

## **Problem Name : Take a user input as integer N. Find out the sum from 1 to N. If any number if divisible\nby 5, then skip that number. And if the sum is greater than 300, don't need to calculate\nthe sum further more. Print the final result. And don't use for loop to solve this problem.\nExample: Input: 30\nOutput: 276**  

----------  

## **Code :**  
```C++
#include <iostream>  
using namespace std;  

int main() {  
    int n, sum = 0;  
    cin >> n;  

    while (n > 0 && sum <= 300) {  
        if (n % 5 != 0)  
            sum += n;  
        n--;  
    }  

    cout << sum << endl;  
      
}  

```  

----------  

## **Problem No : 14**  

## **Problem Name : Print all the Armstrong numbers in a given range.Range will be provided by the user\nArmstrong number is a number that is equal to the sum of cubes of its digits. For example\n0, 1, 153, 370, 371 and 407 are the Armstrong numbers.**  

----------  

## **Code :**  
```C++  
```  

----------

## **Problem No : 15**  

## **Problem Name : Predict the output.**  

---

## **Output :**  
```C++  

```  

---
----------  
