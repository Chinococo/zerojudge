#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(false),cin.tie(0)
#define int long long
#define vec vector<int>
#define vecs vector<string>

#define x first
#define y second
#define maxlen 8
#define over 1e8
#define t tuple<string,string,int>
using namespace std;
bool cmp(pair<int,int>  a,pair<int,int>  b)
{
    return a.x*b.y<a.y*b.x;
}
signed main() {IOS;
  int n;
  cin>>n;
  pair<int,int> data[n];
  for(int i=0;i<n;i++)
      cin>>data[i].x;
    for(int i=0;i<n;i++)
        cin>>data[i].y;
  stable_sort(data,data+n,cmp);
  int answer=0,prev=0;
  for(int i=0;i<n;i++)
      answer+=data[i].y*prev,prev+=data[i].x;
   cout<<answer;


}
