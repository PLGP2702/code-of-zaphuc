#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cout << "Nhap vao mot xau ki tu: ";
    getline(cin, str);

    cout << "cac ki tu chu so co trong xau la: ";
    for (int i = 0; i < str.length(); i++)
    {
        if(isdigit(str[i]))
        {
            cout << str[i] << " ";
        }
    }
    cout << endl;

    return 0;
}