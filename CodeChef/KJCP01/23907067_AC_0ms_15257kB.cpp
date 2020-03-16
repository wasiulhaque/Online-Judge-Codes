#include<bits/stdc++.h>
using namespace std;
map<int,int>m1;
map<int,int>m2;

bool cmp(int x,int y)
{
    if(m1[x]>m1[y]) 
        return 1;
    else  if(m1[x]==m1[y])
    {
        if(m2[x]<m2[y])   
            return 1;
    }
    return 0;
}

int main() 
{
	int n,m;
    cin >> n >> m;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        m1[a]++;
        if(m2[a]==0)
            m2[a]=i+1;
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++)    
    {
        cout << v[i] <<' ';
    }
    cout << '\n';
	return 0;
}