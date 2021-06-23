#include <bits/stdc++.h>
#define max_size 12
using namespace std;
int main() {
   int t,n,m;
   int data[max_size][max_size];
   cin>>t;
   while(t--)
   {
       cin>>n>>m;
       for(int y=1;y<=n;y++)
           for(int x=1;x<=m;x++)
               cin>>data[x][y];
       bool check = true;

       for(int y=1;y<=n;y++)
           for(int x=1;x<=m;x++)
             if(data[x][y] != data[m-x+1][n-y+1])
             {
                 check = false;
                 break;
             }

       if(check)
           cout<<"go forward\n";
       else
           cout<<"keep defending\n";
   }
}