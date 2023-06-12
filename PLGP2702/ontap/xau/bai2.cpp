#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    char c;
    int count = 0;

    cout << "Nhap vao mot xau s: ";
    getline(cin, s);

    cout << "Nhap vao mot ky tu c: ";
    cin >> c;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == c) {
            count++;
        }
    }

    cout << "So lan xuat hien cua ky tu " << c << " trong xau s la: " << count << endl;

    return 0;
}