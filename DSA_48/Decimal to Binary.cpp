#include <bits/stdc++.h>

using namespace std;

int f(int num, int n)
{
    if (num == 0)
    {
        return 0;
    }
    return (num % 2) * pow(10, n) + f(num / 2, n + 1);
}

int main()
{
    int num = 10;
    cout << f(num, 0) << endl;
    int res = 0, n = 0;
    while (num > 0)
    {
        res += (num % 2) * pow(10, n);
        n++;
        num = num / 2;
    }
    cout << res << endl;
    return 0;
}
