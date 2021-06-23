#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
   map<char,pair<int,int>> data;
   int n,m,target;
   char temp;
   cin>>n>>m>>target;
   for(int y=0;y<n;y++)
       for(int x=0;x<m;x++)
       {
           cin>>temp;
           if(temp!='0')
               data[temp]=make_pair(y,x);
       }
   if(data.size()>=target)
   {
       int count = target;
       for(char i='a';i<='z';i++)
           if(data.count(i))
           {
               cout<<data[i].first<<" "<<data[i].second<<endl;
               count--;
               if(count==0)
                   return 0;
           }

   }else
   {
       cout<<"Mission fail.";
   }
}