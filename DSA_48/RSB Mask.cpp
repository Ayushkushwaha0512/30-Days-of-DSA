#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Right most set bit
    bitset<8> bit(56);
    cout<<bit<<endl;
    int mask=1,val=56;
    while(!(mask & val)){
        mask=mask<<1;
    }
    bitset<8> mask1(mask);
    cout<<mask1<<endl;
    
    bitset<8> mask2;
    mask2 = val & (-val);  // x & x``
    cout<<mask2<<endl;
    
    return 0;
}
