#include <bits/stdc++.h>

using namespace std;

int main()
{
    bitset<8> bit("10100101");
    bitset<8> mask(1);
    int pos=3;
    // On third bit;
    mask=mask<<pos;
    bit=bit|mask;
    cout<<bit<<endl;
    
    // Off third bit;
    mask=1;
    mask=~(mask<<pos);
    bit=bit&mask;
    cout<<bit<<endl;
    
    // Toggle third bit;
    mask=1;
    mask=mask<<pos;
    bit=bit^mask;
    cout<<bit<<endl;
    
    // Check third bit;
    mask=1;
    mask=mask<<pos;
    if((bit & mask)!=0){
        cout<<"ON"<<endl;
    }
    else{
        cout<<"OFF"<<endl;
    }
    
    return 0;
}
