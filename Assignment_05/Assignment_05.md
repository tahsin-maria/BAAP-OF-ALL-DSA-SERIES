
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
            cout << i;
        }
        cout << endl;
    }
}
```  

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
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
```  

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
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(j+64);
        }
        cout << endl;
    }
}
```  

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
    int n;
    cin >> n;
    int st = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {

        for (int j = 1; j <= st; j++)
        {
            cout << "*";
        }
        if (i >= n)
        {
            st--;
        }
        else
        {
            st++;
        }
        cout << endl;
    }
}
```  

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
    int m, n;
    cin >> m >> n; // row col
    for (int i = 1; i <= m; i++)
    {

        for (int j = 1; j <= n; j++)
        {

            if (i == 1 || i == m)
            {
                cout << "*";
            }
            else
            {
                if (j == 1 || j == n)
                {
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
        }

        cout << endl;
    }
}
```  

----------  

## **Problem No : 6**  

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
    int st = n;
    int sp = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= st; j++)
        {
            cout << "*";
        }
        sp--;

        cout << endl;
    }
}
```  

----------  

## **Problem No : 7**  

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
        for (int j = 1; j <= st; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= sp; j++)
        {
            cout << " ";
        }

        sp--;
        st++;

        cout << endl;
    }
}
```  

----------  

## **Problem No : 8**  

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
        for (int j = 1; j <= sp; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= st; j++)
        {
            cout << char(j + 64);
        }

        sp--;
        st++;

        cout << endl;
    }
}
```  

----------  

## **Problem No : 9**  

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
        for (int j = st; j >= 1; j--)
        {
            cout << j;
        }
        for (int j = 1; j <= sp; j++)
        {
            cout << " ";
        }
        sp--;
        st++;
        cout << endl;
    }
}
```  

----------  

## **Problem No : 10**  

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
    for (int i = 1; i <= 2*n-1; i++)
    {
        for (int j = 1; j <= sp; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= st; j++)
        {
            cout << "*";
        }
        if (i < n)
        {
            sp--;
            st++;
        }
        else
        {
            sp++;
            st--;
        }

        cout << endl;
    }
}
```  

----------  

