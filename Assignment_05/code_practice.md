----------  

## **Problem No : 1**  

## **Problem Name : Print the following pattern**  

----------  

## **Code :**  
```C++
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == (n / 2) + 1)
            {
                cout << '*';
            }
            else
            {
                if (j == (n / 2) + 1)
                {
                    cout << '*';
                }
                else
                {
                    cout << ' ';
                }
            }
        }

        cout << endl;
    }
}
```  

----------  
## **Output :**
![image](https://github.com/user-attachments/assets/7efe6a75-96e6-4163-954f-d5fd16ee7978)

----------  

----------  

## **Problem No : 2**  

## **Problem Name : Print the following pattern**  

----------  

## **Code :**  
```C++
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mid = 0;
    (n % 2 == 0) ? mid = n / 2 : mid = (n / 2) + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j == (n+1) || (i == j && i != mid))
            {
                cout << "*";
            }

            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}
```  

----------  
## **Output :**
![image](https://github.com/user-attachments/assets/4e83a860-d10b-436a-bec7-b7c4690948a5)

---------- 

----------  

## **Problem No : 3**  

## **Problem Name : Print the following pattern**  

----------  

## **Code :**  
```C++
#include <iostream>
using namespace std;
int main()
{
    int n,k=1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
           cout<<k++;
        }

        cout << endl;
    }
}
```  

----------  
## **Output :**
![image](https://github.com/user-attachments/assets/d43feba8-5150-46ce-a536-d1fb81bb4b5d)

---------- 

----------  

## **Problem No : 4**  

## **Problem Name : Print the following pattern**  

----------  

## **Code :**  
```C++
#include <iostream>
using namespace std;
int main()
{
    int n, k = 1;
    cin >> n;
    bool f = true;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }

        cout << endl;
    }
}
```  

----------  
## **Output :**
![image](https://github.com/user-attachments/assets/3b4dc0de-94f1-478c-bcc7-f6707e9614e9)

---------- 

----------  

## **Problem No : 5**  

## **Problem Name : Print the following pattern**  

----------  

## **Code :**  
```C++
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int st = 2 * n - 1;
    int sp = 0;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= sp; j++)
        {
            cout << " ";
        }
        for (int jk = 1; jk <= st; jk++)
        {

            cout << "*";
        }
        sp++;
        st -= 2;
        cout << endl;
    }
}
```  

----------  
## **Output :**
![image](https://github.com/user-attachments/assets/c05c278e-08e2-4843-b7de-b9a193403010)


---------- 
## **Problem No : 6**  

## **Problem Name : Print the following pattern**  

----------  

## **Code :**  
```C++

```  

----------  
## **Output :**
![image](https://github.com/user-attachments/assets/8f6507cc-5e52-4ba9-98fc-94acc7075b9f)


---------- 
## **Problem No : 7**  

## **Problem Name : Print the following pattern**  

----------  

## **Code :**  
```C++

```  

----------  
## **Output :**


---------- 
## **Problem No : **  

## **Problem Name : Print the following pattern**  

----------  

## **Code :**  
```C++

```  

----------  
## **Output :**


---------- 
## **Problem No : **  

## **Problem Name : Print the following pattern**  

----------  

## **Code :**  
```C++

```  

----------  
## **Output :**


---------- 
## **Problem No : **  

## **Problem Name : Print the following pattern**  

----------  

## **Code :**  
```C++

```  

----------  
## **Output :**


---------- 
## **Problem No : **  

## **Problem Name : Print the following pattern**  

----------  

## **Code :**  
```C++

```  

----------  
## **Output :**


---------- 
## **Problem No : **  

## **Problem Name : Print the following pattern**  

----------  

## **Code :**  
```C++

```  

----------  
## **Output :**


---------- 
