#include <iostream>

using namespace std;
//break
//continue
int main()
{   
    // for(int i = 1; i <= 10; i++)
    // {
    //     cout << "Hello my love <3\n";
    // }
    // int i; 
    // int n = 100;
    // for(i = n; i >= 1; i--){
    //     cout << i << endl;
    // }
    // int n = 100;
    // for(int i = 1; i <= 100; i++)
    // {
    //     cout << i << endl;
    //     if(i == 40)
    //     {
    //         break;
    //     }
    // }
    // int n = 100;
    // for(int i = 1; i <= 10; i++)
    // {
    //     cout << "Xin chao <3!\n";
    //     continue;
    //     cout << "Zaphuc2702";
    // }
    /* //nhập vào giá trị nguyên dương ,tính tổng sau và in ra kết quả màn hình. 
    int n;
    cout << "Nhap gia tri n: ";
    cin >> n;
    int s = 0;
    for(int i = 1; i <= n; i++)
    {
        s += i;
    }
    cout << "tong la: " << s << endl;
    */
    /* //nhập vào giá trị nguyên dương ,tính tổng sau và in ra kết quả màn hình.
    int n;
    cout << "Nhap gia tri n: ";
    cin >> n;
    int s = 0;
    for(int i = 1; i <= n; i++)
    {
        s += i * i;
    }
    cout << s << endl;
    */ 
    /*
    int n;
    cout << "Nhap gia tri n: ";
    cin >> n;
    int s = 0;
    for(int i = 0; i <= n; i+=3)
    {
        s+=i;
    }
    cout << s << endl;
    */
    /* while------------------------------------
    int i = 0;
    while (i < 27)
    {
        cout << i << endl;
        ++i;
    }
    cout << "Gia tri cua i sau khi ket thuc: " << i << endl;
    */
    int n; cin >> n;
    int cnt = 0;
    while (n != n)
    {
        ++cnt;
        n/10;
    }   
    return 0;
}