#include <bits/stdc++.h>
using namespace std;
int main() {
    int x,y,z,w,n,m,t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z>>w>>n>>m;
        string cmd;
        cin.ignore();
        getline(cin,cmd);
        stringstream ss;
        ss<<cmd;
        string temp;
        int bad=0;
        //cout<<m<<endl;
        while(ss>>temp)
        {
            m-=bad;
            if(m<=0)
                break;
            if(temp=="1")
                m+=x;
            else if(temp=="2")
                m+=y;
            else if(temp=="3")
                m-=z;
            else if(temp=="4")
                m-=w;
            if(m<=0)
                break;
            if(temp=="4")
                bad+=n;
            //cout<<m<<endl;
        }
        if(m<=0)
            cout<<"bye~Rabbit"<<endl;
        else
            cout<< m<<"g"<<endl;
    }

}
