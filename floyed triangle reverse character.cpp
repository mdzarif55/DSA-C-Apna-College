#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    char s='A';
    for(int i=0; i<n; i++){
        for(int j=i; j>=0; j--){
            cout<<s;
            s++;
        }
        cout<<endl;
    }

        return 0;
}
