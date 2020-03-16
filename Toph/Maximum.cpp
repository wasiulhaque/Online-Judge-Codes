#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    priority_queue<int>pq;
    for(int i=0;i<N;i++){
        int x;
        cin >> x;
        pq.push(x);
    }
    cout << pq.top();
}

