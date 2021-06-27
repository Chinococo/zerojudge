#include <bits/stdc++.h>

using namespace std;
void move(int n,char A,char B,char C)
{
    if(n==0)
        return;
    move(n-1,A,C,B);
    cout<<"Move ring "<<n<<" from "<<A<<" to "<<C<<endl;
    move(n-1,B,A,C);
}

int main() {
    int i;
    while(cin>>i)
  move(i,'A','B','C'),cout<<endl;

}