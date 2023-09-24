#include <bits/stdc++.h>

using namespace std;

int bin_to_dec(int num)
{
    int n = 0, res = 0;
    while (num > 0)
    {
        res += (num % 10) * pow(2, n);
        n++;
        num = num / 10;
    }
    return res;
}

int dec_to_bin(int num)
{
    int res = 0, n = 0;
    while (num > 0)
    {
        res += (num % 2) * pow(10, n);
        n++;
        num = num / 2;
    }
    return res;
}

int ith_bit_2(int num, int i)
{
    return ((num >> i) & 1);
}

int ith_bit_1(int num, int i)
{
    int mask = 1;
    mask = mask << i;
    return ((mask & num) != 0);
}

int set_bit(int num, int i)
{
    int mask = 1 << i;
    num = num | mask;
    return num;
}

int clear_bit_1(int num, int i)
{
    int mask = 1 << i;
    num = num ^ mask;
    return num;
}

int clear_bit_2(int num, int i)
{
    int mask = 1 << i;
    mask = ~mask;
    num = num & mask;
    return num;
}

int count_bit(int num)
{
    int c = 0;
    while (num > 0)
    {
        if (num & 1)
        {
            c++;
        }
        num = num >> 1;
    }
    return c;
}

int main()
{
    // no of bit to change a to b
    int a = bin_to_dec(10110);
    int b = bin_to_dec(11011);
    int res = a ^ b;
    cout << res << endl;
    cout << dec_to_bin(res) << endl;
    int c = 0;
    while (res > 0)
    {
        if (res & 1)
        {
            c++;
        }
        res = res >> 1;
    }
    cout << c << endl;
    return 0;
}
