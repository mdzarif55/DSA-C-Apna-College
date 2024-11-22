#include <bits/stdc++.h>
using namespace std;
int decTObinary(int dnum)
{
    int ans=0, pow=1;
    while(dnum>0)
    {
        int rem = dnum%2;
        dnum= dnum/2;
        ans=ans+(rem*pow);
        pow=pow*10;
    }
    return ans;

}
int main()
{
    for(int i=1; i<10; i++){
    cout<<decTObinary(i)<<endl;

    }    return 0;
}


