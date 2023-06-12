#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Nhap vao mot xau: ";
    getline(cin, str); // nhap xau

    cout << "Xau dao nguoc cua \"" << str << "\" la: ";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        cout << str[i]; // in cac ki tu theo thu tu nguoc lai
    }
    cout << endl;

    return 0;
}