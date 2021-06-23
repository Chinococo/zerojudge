#include <bits/stdc++.h>

#define max_size 101
using namespace std;
map<char, int> f;

void build() {
    f['A'] = 10;
    f['B'] = 11;
    f['C'] = 12;
    f['D'] = 13;
    f['E'] = 14;
    f['F'] = 15;
    f['G'] = 16;
    f['H'] = 17;
    f['I'] = 34;
    f['J'] = 18;
    f['K'] = 19;
    f['L'] = 20;
    f['M'] = 21;
    f['N'] = 22;
    f['O'] = 35;
    f['P'] = 23;
    f['Q'] = 24;
    f['R'] = 25;
    f['S'] = 26;
    f['T'] = 27;
    f['U'] = 28;
    f['V'] = 29;
    f['W'] = 32;
    f['X'] = 30;
    f['Y'] = 31;
    f['Z'] = 33;
}

void check(string data) {
    int answer = 0;
    for (int i = 0; i < data.length(); i++) {
        if (i == 0) {
            answer += (f[data[i]] / 10) * 1 + (f[data[i]] % 10) * 9;
        } else {
            answer += ((data[i] - '0') * (9 - i));
            if(i==9)
                answer += (data[i] - '0');
            //cout<< (data[i] - '0')<<" "<<9-i<<endl;
        }
        //cout<<answer<<endl;
    }

    if(answer%10==0)
    cout<<data<<" ";
}

int main() {
    build();
    check("A193456789");
    int t;
    cin >> t;
    while (t--) {
        string index;
        string data;
        cin >> index >> data;
        for(int i=0;i<3-index.length();i++)
            cout<<0;
        cout<<index<<" ";
        for (int i = 0; i < data.length(); i++) {
            if (data[i] == '*') {
                if(i==0)
                {
                    for(char t = 'A';t<='Z';t++)
                        data[i]=t,check(data);
                }else
                {
                    for(char t='0';t<='9';t++)
                        data[i]=t,check(data);
                }
            }

        }
        cout<<endl;

    }


}