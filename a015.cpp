#include <bits/stdc++.h>
#define max_size 101
using namespace std;
int main() {
    int n,m;
    int data[max_size][max_size],flip[max_size][max_size];
    while(cin>>n>>m)
    {
        for(int y=1;y<=n;y++)
            for(int x=1;x<=m;x++)
                cin>>data[x][y];

        for(int y=1;y<=m;y++)
            for(int x=1;x<=n;x++)
                flip[x][y] = data[y][x];

        for(int y=1;y<=m;y++,cout<<endl)
            for(int x=1;x<=n;x++)
                cout<<flip[x][y]<<' ';
    }

}
