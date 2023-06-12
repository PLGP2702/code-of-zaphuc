#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    char c;
    int lt = -1;

    cout << "Nhap vao mot xau s: ";
    getline(cin, s);

    cout << "Nhap vao mot ky tu c: ";
    cin >> c;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == c) {
            lt = i;
            break;
        }
    }

    cout << "Vi tri dau tien cua ky tu " << c << " trong xau s la: " << lt << endl;

    return 0;
}