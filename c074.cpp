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

void output();

int data[20];
int out[6];
bool use[50];
int n;

void test(int index, int p) {
    //cout<<index<<" "<<p<<endl;
    if (index >= 6) {
        output();
        return;
    }
    for (int i = p; i < n; i++) {

        out[index] = data[i];
        //output();
        test(index + 1, i + 1);
    }
}

void output() {
    for (int i = 0; i < 5; i++)
        cout << out[i] << " ";
    cout << out[5] << endl;
}

signed main() {
    IOS;
    int index=0;
    while (cin >> n) {
        if(n==0)
            break;
        else if(index!=0)
            cout<<endl;
        memset(use, 0, sizeof(use));
        for (int i = 0; i < n; i++)
            cin >> data[i];
        sort(data, data + n);
        test(0, 0);
        index++;
        
    }

}
