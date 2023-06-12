#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    cout << "Nhap vao mot xau s: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (islower(s[i])) {
            s[i] = toupper(s[i]);
        }
    }

    cout << "Xau s sau khi chuyen: " << s << endl;

    return 0;
}