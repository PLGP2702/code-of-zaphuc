#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    int A[n];
    cout << "Nhap mang A gom " << n << " so nguyen: ";\
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(A[i] < 0)
        {
            A[i] = 0;
        }
    }
    
    cout << "Mang A asau khi thay the cac phan tu am bang 0 la: ";
    for (int i = 0; i < n; i++)
    {
       cout << A[i] << " ";
    }

    cout << endl;
}