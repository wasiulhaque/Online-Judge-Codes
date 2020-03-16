#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
//    priority_queue<int,vector<int>, greater<int> >pq;
    while(cin >> N)
    {
        if(N==0)
            break;
        priority_queue<int,vector<int>, greater<int> >pq;
        while(N--)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        int cost=0, sum=0;
        while(pq.size()>1)
        {
            sum = pq.top();
            pq.pop();
            sum=sum + pq.top();
            pq.pop();
            cost=cost+sum;
            pq.push(sum);
        }
        cout << cost << endl;
    }
}