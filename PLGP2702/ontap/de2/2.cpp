#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "Nhap vao mot xau ki tu: ";
    getline(cin, str);

    int dem = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'o') {
            dem++;
        }
    }

    cout << "So luong ki tu 'o' trong xau la: " << dem << endl;

    return 0;
}