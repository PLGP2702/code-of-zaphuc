#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int k;

    cout << "Nhap vao mot xau s: ";
    getline(cin, s);

    cout << "Nhap vao mot so nguyen k: ";
    cin >> k;

    cout << "Xau s: " << s << endl;
    cout << "Do dai cua s: " << s.length() << endl;
    cout << "Ky tu thu: " << k << " trong s: " << s[k] << endl;

    return 0;
}