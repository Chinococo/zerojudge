#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(false),cin.tie(0)
#define int long long
#define vec vector<int>
#define vecs vector<string>

#define x first
#define y second
#define maxlen 8
#define over 1e8
using namespace std;
int pos[50000];
int n,k;
bool check(int R)
{
    int use=0;
    int maxlength=-1;
    for(int i=0;i<n;i++)
    {
        if(k<use)
            return false;
        if(maxlength>=pos[i])
            continue;
        use++;
        maxlength=pos[i]+R;
    }
    if(k<use)
        return false;
    return true;
}
signed main()
{
  cin>>n>>k;
  for(int i=0;i<n;i++)
      cin>>pos[i];
  sort(pos,pos+n);
  int R=pos[n-1]-pos[0],L=1;
  while(R!=L)
  {
      int mid=(R+L)/2;
      //cout<<L<<" "<<R<<" "<<mid<<endl;
      //getchar();
      if(check(mid))
          R=mid;
      else
          L=mid+1;
  }
  cout<<R;
}