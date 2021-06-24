#include <bits/stdc++.h>

#define x first
#define y second
using namespace std;

int main() {
    int n, answer = 0;
    cin >> n;
    pair<int, int> data[n];
    for (int i = 0; i < n; i++)
        cin >> data[i].x >> data[i].y;
    sort(data, data + n);
    pair<int, int> now = data[0];
    for (int i = 1; i < n; i++) {
        //cout<<data[i].x<<" "<<data[i].y<<endl;
        if (data[i].x <= now.y && data[i].x >= now.x)
        {
            now.y = max(data[i].y, now.y);
            if(i==n-1)
                answer += (now.y - now.x);
        }
        else {
            answer += (now.y - now.x), now = data[i];
            if(i==n-1)
                answer += (now.y - now.x);
        }
        //cout<<now.x<<" "<<now.y<<endl<<endl;
    }
    if(n==1)
    answer += (now.y - now.x);
    cout<<answer;

}
