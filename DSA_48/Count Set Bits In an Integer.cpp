#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    bitset<8> bit(90);
    cout<<bit<<endl;
    int val=90;
    int cnt=0;
    while(val>0){
        if((val&1)==1){
            cnt++;
        }
        val=val>>1;
    }
    cout<<cnt<<endl;
    
    
    // Kernighan`s Algorithm
    val=90;
    cnt=0;
    while((val & (~val+1))>0){
        cnt++;
        val=val^(val & (~val+1));  //  val = val - rsb(val & (~val+1));
    }
    cout<<cnt<<endl;
    return 0;
}
