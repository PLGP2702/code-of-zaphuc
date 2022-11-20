#include <iostream>
using namespace std;

//---break
//---continue
//---

int main()
{
    /*
    int n = 100;
    for (int i = 1; i <= n; i++)
    {
        
        cout << i << endl;
    }
    */
    /*
    int n = 50;
    for (int  i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    */
    /*--------------------Chia het cho 5-------------------
    int n = 100;
    for (int  i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            cout << i << endl;
        }   
    }
    */
//break
    /*
    int n = 100;
    for (int i = 0; i <= n; i++)
    {
       cout << i << endl;
       if(i == 40){
            break;
       }
    }
    */
    /*
    int n = 1000;
    for (int i = 0; i <= n; i++)
    {
        cout << i << endl;
        if(i == 1){
            cout <<"I love you";
            break;
        }
    }
    */
    /*
    int n;
    cout << "Nhap n: ";
    cin >> n; 
    for (int  i = 0; i <= n; i++)
    {
        cout << i << endl;
        if(i == 50)
        {
            break;
        }
    } 
    */
//continue
    /*
    int  n = 100;
    for (int i = 0; i <= 10; i++)
    {
        cout << "hello bin\n";
        continue;
        cout << "hello zaphuc\n";
    }
    */
    //-----------------tinh' tổng----------------
    /*
    int n; 
    cout <<"nhap n: ";
    cin >> n;
    int s = 0;
    for (int  i = 1; i <= n; i++)
    {
        s += i;
    }
    cout << s << endl;
    */
    //-----------tổng bình phương -----------------
    int n;
    cout << "nhap n: ";
    cin >> n ;
    int S = 0;
    for (int i = 1; i <= n; i++)
    {
       S += i * i;
    }
    cout << S << endl;
}
