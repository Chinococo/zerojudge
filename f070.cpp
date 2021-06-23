#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int lcm(int a,int b)
{
    //cout<<a<<' '<<b<<" "<<(a*b)/__gcd(a,b)<<endl;
    return (a*b)/__gcd(a,b);
}
int main() {
    int n[3][2];
    for(int i=0;i<3;i++)
        cin>>n[i][0]>>n[i][1];
    int answer=0;
    int t;
    t=lcm(n[0][0],n[1][0]);
    while(t%n[2][0]!=n[2][1])
        t+=lcm(n[0][0],n[1][0]);
    answer+=t;

    t=lcm(n[0][0],n[2][0]);
    while(t%n[1][0]!=n[1][1])
        t+=lcm(n[0][0],n[2][0]);
    answer+=t;

    t=lcm(n[1][0],n[2][0]);
    while(t%n[0][0]!=n[0][1])
        t+=lcm(n[1][0],n[2][0]);

    answer+=t;

    int LCM = lcm(n[0][0],lcm(n[1][0],n[2][0]));
    while(answer>0)
        answer-=LCM;
    answer+=LCM;
    cout<<answer;
}