#include <bits/stdc++.h>
using namespace std;

//S= 1/1 + 1/2 + 1/3 + 1/4 +... + 1/n
/*
int tong1(int n)
{
    return n * (n + 1) / 2;
}
*/
/*
float tong2(int n)
{
    float res = 0;
    for (int i = 1; i <= n; i++)
    {
        res += 1.0 /i;
    }
    return res;
}
*/
// kiem tra xem tong chu so cua 1 so co phai la so nguyen to hay khong.
bool nguyento(int);
bool check(int);

int min(int a, int b)
{
    if(a < b)
        return a;
    else return b;
}

bool nguyento(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}

bool check(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    if(nguyento(sum))
        return true;
    else return false;
}

int main()
{
    int n = 124;
    if(check(n))
        cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}