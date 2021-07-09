#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(false),cin.tie(0)
#define int long long
#define vec vector<int>
#define vecs vector<string>
#define ss stringstream
#define maxlen 8
#define over 1e8


using namespace std;

signed main() {IOS;
    int n,k,temp;
    cin>>n>>k;
    vec data;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        data.emplace_back(temp);
    }

    while (k--)
    {
        int val;
        cin>>val;
        auto test=lower_bound(data.begin(),data.end(),val);
        if(test!=data.end()) {
            if(val==*test)
            {
                cout<<test-data.begin()+1<<endl;
                continue;
            }
        }
        cout<<0<<endl;
    }
}