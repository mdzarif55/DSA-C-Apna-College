#include <bits/stdc++.h>
using namespace std;
int BinaryToDec(int bnum)
{
    int ans=0, pow=1;
    while(bnum>0)
    {
        int rem = bnum%10;
        ans=ans+(rem*pow);
        bnum= bnum/10;
        pow=pow*2;
    }
    return ans;

}
int main()
{
    int bnum= 10000000000;
    cout<<BinaryToDec(bnum)<<endl;

    return 0;
}


