#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
//    bool isStack = true, isQueue = true, isPQueue = true;
    while(scanf("%d",&n)!=EOF)
    {
        bool isStack = true, isQueue = true, isPQueue = true;
        stack<int>s;
        queue<int>q;
        priority_queue<int>pq;
        int i,input,x;
        for(i=0; i<n; i++)
        {
            cin >> input >> x;
            if(input==1)
            {
                if(isStack)
                    s.push(x);
                if(isQueue)
                    q.push(x);
                if(isPQueue)
                    pq.push(x);
            }
            if(input==2)
            {
                if(isStack)
                {
                    if(s.empty() || s.top()!=x)
                        isStack = false;
                    else
                        s.pop();
                }
                if(isQueue)
                {
                    if(q.empty() || q.front()!=x)
                        isQueue = false;
                    else
                        q.pop();
                }
                if(isPQueue)
                {
                    if(pq.empty() || pq.top()!=x)
                        isPQueue = false;
                    else
                        pq.pop();
                }
            }
        }
        if(isStack == true && isQueue == false && isPQueue == false)
            cout << "stack" << endl;
        else if (isStack == false && isQueue == true && isPQueue == false)
            cout << "queue" << endl;
        else if (isStack == false && isQueue == false && isPQueue == true)
            cout << "priority queue" << endl;
        else if (isStack == false && isQueue == false && isPQueue == false)
            cout << "impossible" << endl;
        else
            cout << "not sure" << endl;
    }
}