
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

## **Problem Name : Print the factorials of first ‘n’ numbers Sample Input: 10 Output: 1 2 6 24 120 720 5040 40320 362880 3628800**  

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
    while (s <= n)
    {
        fact = fact * s;
        cout << fact << endl;
        s++;
    }
}
```  

----------  

## **Problem No : 08**  

## **Problem Name : Find the sum of the series upto n terms. Write a program to calculate the sum of series up to n term. For example, if n =5 the series will become 2 + 22 + 222 + 2222 + 22222 = 24690. Take the user input and then calculate. And the output style should match which is given in the Example. Input: 5 Output: Sum of above series is: 24690**  

----------  

## **Code :**  
```C++
#include <iostream>
using namespace std;
int main()
{
    int n, r = 0;
    cin >> n;
    long long int sum = 0;
    int s = n;
    while (s--)
    {
        r = r * 10 + 2;

        sum += r;
    }
    cout << sum << endl;
}
```  

----------  

## **Problem No : 09**  

## **Problem Name : Write a program to print all the unique combinations of 1,2,3 and 4 1 2 3 4 1 2 4 3 1 3 2 4 1 3 4 2 1 4 2 3 1 4 3 2 2 1 3 4 2 1 4 3 2 3 1 4 2 3 4 1 2 4 1 3 ...**  

----------  

## **Code :**  
```C++

```  

----------  

## **Problem No : 10**  

## **Problem Name : Write a program that will take 2 numbers as input and prints the LCM and HCF of those 2 numbers.**  

----------  

## **Code :**  
```C++  
```  

----------  

## **Problem No : 11**  

## **Problem Name : Display Fibonacci series up to 10 terms. Note: The Fibonacci Sequence is a series of numbers. The next number is found by adding up the two numbers before it. The first two numbers are 0 and 1. For example, 0, 1, 1, 2, 3, 5, 8, 13, 21. The next number in this series above is 13+21 = 34.**  

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

## **Problem Name : Reverse a given integer number Input: 76542 Output: 24567**  

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

## **Problem Name : Take a user input as integer N. Find out the sum from 1 to N. If any number if divisible by 5, then skip that number. And if the sum is greater than 300, don't need to calculate the sum further more. Print the final result. Example: Input: 30 Output: 276**  

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

## **Problem Name : Print all the Armstrong numbers in a given range. Range will be provided by the user. Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.**  

----------  

## **Code :**  
```C++
#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    for (int num = start; num <= end; num++) {
        int sum = 0, temp = num;
        
        while (temp > 0) {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if (sum == num)
            cout << num << " ";
    }
}

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

