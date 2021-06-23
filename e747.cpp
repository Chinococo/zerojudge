#include <bits/stdc++.h>
#define point pair<int,int>
#define x first
#define y second
#define int long long
#define float long double
using namespace std;
point answer[4];
float rantagle(point a,point b,point c)
{
    return (float) abs((float)( a.x*b.y+b.x*c.y+c.x*a.y)-(float)(a.y*b.x+b.y*c.x+c.y*a.x))/2;
}
float area(point input[4])
{
    float rantagel[4];
    rantagel[0]=rantagle(input[0],input[1],input[2]);
    rantagel[1]=rantagle(input[1],input[2],input[3]);
    rantagel[2]=rantagle(input[2],input[3],input[0]);
    rantagel[3]=rantagle(input[3],input[1],input[0]);
    sort(rantagel,rantagel+4);
    if(rantagel[3]-rantagel[2]-rantagel[1]-rantagel[0]==0)
    {
        return rantagel[3]-rantagel[0];
    }else
    {
        if(rantagel[0]==0&&rantagel[1]==0)
            return 0;
        return (float)(rantagel[0]+rantagel[1]+rantagel[2]+rantagel[3])/2;
    }
}

signed main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int index=0;
        while(n--)
        {
            int X,Y;
            cin>>X>>Y;
            if(index>3)
            {
                point contract[4];
                for(int i=0;i<4;i++)
                {
                    for(int p=0;p<4;p++)
                        contract[p]=answer[p];
                    contract[i] = make_pair(X,Y);
                    if(area(answer)<=area(contract))
                    {
                        X = answer[i].x;
                        Y = answer[i].y;
                        answer[i].x = contract[i].x;
                        answer[i].y = contract[i].y;
                    }
                }
            }else
            {
                answer[index] = make_pair(X,Y);
                index++;
            }
        }
        if((int) area(answer) == area(answer))
        cout<<fixed<< setprecision(0)<<area(answer)<<endl;
        else
        cout<<fixed<< setprecision(1)<<area(answer)<<endl;

    }
}
