#include <bits/stdc++.h>

using namespace std;

int main() {
   string data;
   cin>>data;
   //cout<<data<<endl;
   for(int i=0;i<data.length();i++)
       cout<<data.substr(i,data.length()-i)+data.substr(0,i)<<endl;

}
