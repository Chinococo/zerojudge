#include <bits/stdc++.h>

using namespace std;
int data[514][514];
int dir[4][2]={{0,-1},{0,1},{-1,0},{1,0}};
int n,w,s,e,area;
void update(int x,int y)
{
    n = min(n,y-1);
    e = max(e,x-1);
    s = max(s,y-1);
    w = min(w,x-1);
}
void count(int x,int y)
{
    if(data[x][y]==1)
    {
        update(x,y);
        data[x][y]=0;
        area++;
        for(int i=0;i<4;i++)
            count(x+dir[i][0],y+dir[i][1]);
    }


}
int main() {
    int x, y;
    cin >> x >> y;
    memset(data,0,sizeof(data));
    for (int i = 1; i <= y; i++) {
        for (int j = 1; j <= x; j++) {
            cin>>data[j][i];
        }
    }
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            if(data[j][i]==1)
            {
                n=w=9999;
                e=s=-1;
                area=0;
                count(j,i);
                cout<<w<<" "<<n<<" "<<e<<" "<<s<<" "<<area<<endl;
            }
        }
    }


}
