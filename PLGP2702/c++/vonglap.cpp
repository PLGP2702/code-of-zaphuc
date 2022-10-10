#include <iostream>

using namespace std;
//break
//continue
int main()
{
    // for (int i = 1; i <= 5; i++){
    //     cout << "Hello !\n";
    // }
    // int n = 100;
    // for(int i = n; i >= 1; i--){
    //     cout << i << endl;
    //     if(i == 40)
    //         break;
    // }
    // int n = 100;
    // for(int i = 1; i <= 100; i++){
    //     cout <<"HI !\n";
    //     continue;
    //     cout <<"Zaphuc2702\n";
    // }
    /* //nhập vào giá trị nguyên dương ,tính tổng sau và in ra kết quả màn hình. 
    int n;
    cout << "Nhap gia tri cua n: "; cin >> n;
    int s = 0;
    for(int i = 1; i <= n; i++){
        s += i;
    }
    cout << s << endl;
    */
    /* //nhập vào giá trị nguyên dương ,tính tổng sau và in ra kết quả màn hình.
    int n;
    cout << "Nhap gia tri cua n: "; cin >> n;
    int s = 0;
    for(int i = 1; i <= n; i++){
        s += i * i;
    }
    cout << s << endl;
    */
    int n;
    cout << "Nhap gia tri cua n: "; cin >> n;
    int s = 0;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0)
            s += i;
    }
    cout << s << endl;
    return 0;
}