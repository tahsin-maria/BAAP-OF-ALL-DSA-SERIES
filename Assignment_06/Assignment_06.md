----------  

## **Problem No : 1**  

## **Problem Name : Print the following pattern**  

----------  

## **Code :**  
```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int st = 1;         
    int sp = n - 1;      
    
    for (int i = 1; i <= n; i++) {
     
        for (int j = 1; j <= sp; j++) {
            cout << " ";
        }
        
     
        for (int jk = 1; jk <= st; jk++) {
            cout << jk;
        }

        sp--;    
        st += 2; 
        
        cout << endl; 
    }

  
}

```  

----------  
## **Output :**
![image](https://github.com/user-attachments/assets/e21007a5-136d-40ca-b943-8b1fdf4e2ca0)


----------  

----------  

## **Problem No : 2**  

## **Problem Name : Print the following pattern**  

----------  

## **Code :**  
```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int st = 1;         
    int sp = n - 1;      
    
    for (int i = 1; i <= n; i++) {
     
        for (int j = 1; j <= sp; j++) {
            cout << " ";
        }
        
     
        for (int jk = 1; jk <= st; jk++) {
            cout << char(jk+64);
        }

        sp--;    
        st += 2; 
        
        cout << endl; 
    }

}

```  

----------  
## **Output :**
![image](https://github.com/user-attachments/assets/44255436-3df2-4a98-aba3-f008fcc2a39e)


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
    int n;
    cin >> n;
    int st = 1;
    int sp = n - 1;
    for (int i = 1; i <= n; i++)
    {
        int col = 0;
        int row = i;
        for (int j = 1; j <= sp; j++)
        {
            cout << " ";
            col++;
        }
        for (int jk = 1; jk <= st; jk++)
        {
            col++;
            cout << char(row + 64);
            if (col < n)
            {
                row--;
            }
            else
            {
                row++;
            }
        }
        sp--;
        st += 2;
        cout << endl;
    }
}
```  

----------  
## **Output :**
![image](https://github.com/user-attachments/assets/45fc764a-ad1d-4802-a49a-80507b1824c4)


----------  

----------  

## **Problem No : 4**  

## **Problem Name : Print the following pattern**  

----------  

## **Code :**  
```C++

```  

----------  
## **Output :**
![image](https://github.com/user-attachments/assets/589240de-4eb9-4f4f-ba04-31989dcc4693)


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
    int n,t;
    cin >> n;
    int st = n;
    int sp = 1;t=n;
    for (int i = 1; i <= n; i++)
    {
        for (int jk = 1; jk <= st; jk++)
        {

            cout << jk;
        }
        if (i > 1)
        {
            for (int j = 1; j <= sp; j++)
            {
                cout << " ";
            }
            sp += 2;
        }
        if (i == 1)
        {
            t--;
        }
        for (int jk = t; jk >= 1; jk--)
        {

            cout << jk;
        }

        st--;
        if(i>1){
            t--;
        }
        cout << endl;
    }
}

```  

----------  
## **Output :**

![image](https://github.com/user-attachments/assets/6d4f38d0-66ff-4113-8086-df9c8c336c07)


----------  

----------  

## **Problem No : 6**  

## **Problem Name : Print the following pattern**  

----------  

## **Code :**  
```C++

```  

----------  
## **Output :**
![image](https://github.com/user-attachments/assets/742f12ed-1667-43cb-9762-507e2e4e5f36)


----------  

----------  

## **Problem No : 7**  

## **Problem Name : Print the following pattern**  

----------  

## **Code :**  
```C++

```  

----------  
## **Output :**
![image](https://github.com/user-attachments/assets/d0747d2e-118c-40ec-a258-807e0ebc8a68)


----------  

----------  

## **Problem No : 8**  

## **Problem Name : Print the following pattern**  

----------  

## **Code :**  
```C++

```  

----------  
## **Output :**
![image](https://github.com/user-attachments/assets/f2c68f13-8d93-448b-89b9-c0a2e208055b)


----------  

----------  

## **Problem No : 9**  

## **Problem Name : Print the following pattern**  

----------  

## **Code :**  
```C++

```  

----------  
## **Output :**
![image](https://github.com/user-attachments/assets/88a6392c-610f-4e89-a229-c7e27d5badbf)


----------  

----------  

## **Problem No : 10**  

## **Problem Name : Print the following pattern**  

----------  

## **Code :**  
```C++

```  

----------  
## **Output :**
![image](https://github.com/user-attachments/assets/2494f2c6-8f3b-4dd3-8bd8-4b4dad1ac3f0)


----------  

----------  

## **Problem No : 11**  

## **Problem Name : Print the following pattern**  

----------  

## **Code :**  
```C++

```  

----------  
## **Output :**
![image](https://github.com/user-attachments/assets/326a50c9-b8a1-4655-828b-81e92f32f984)


----------  

1.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }




2.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout<<endl;



3.
for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }




4.
   for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout<<endl;
    }




5.




