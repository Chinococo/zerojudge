#include <bits/stdc++.h>
#define max_size 101
using namespace std;
int main() {
    long long a,b,c;
    while(cin>>a>>b>>c)
    {
        cout<<a/b<<'.';
        while(c--)
            a%=b,a*=10,cout<<a/b;
        cout<<endl;
    }



}