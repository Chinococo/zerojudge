#include <bits/stdc++.h>

#define x first
#define y second
using namespace std;

int main() {
    int n,answer=0;
    cin>>n;
    bool check[n];
    int c[n];
    memset(check,0,sizeof (check));
    for(int i=0;i<n;i++)
        cin>>c[i];
    for(int i=0;i<n;i++)
        if(check[i]==0)
        {
            answer++;
            int now = i;
            while(check[now]==0)
            {
                check[now]= true;
                now = c[now];
            }
        }
    cout<<answer;
}
