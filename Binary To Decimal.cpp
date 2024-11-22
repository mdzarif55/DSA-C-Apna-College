#include <bits/stdc++.h>
using namespace std;
int BinaryToDec(int bnum)
{
    int ans=0, pow=1;
    while(bnum>0)
    {
        int rem = bnum%10;
        bnum= bnum/2;
        ans=ans+(rem*pow);
        pow=pow*10;
    }
    return ans;

}
int main()
{
    for(int i=1; i<10; i++)
    {
        cout<<decTObinary(i)<<endl;

    }
    return 0;
}


