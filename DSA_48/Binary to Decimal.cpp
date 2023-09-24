#include <bits/stdc++.h>

using namespace std;

int f(int num, int n)
{
    if (num == 0)
    {
        return 0;
    }
    return (num % 10) * pow(2, n) + f(num / 10, n + 1);
}

int main()
{
    int num = 101011;
    cout << f(num, 0) << endl;
    int res = 0, n = 0;
    while (num > 0)
    {
        res += (num % 10) * pow(2, n);
        n++;
        num = num / 10;
    }
    cout << res << endl;
    return 0;
}
