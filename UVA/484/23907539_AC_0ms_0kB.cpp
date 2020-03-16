#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int>vec;
    map<int, int>m;
    int a, i;
    while(scanf("%d",&a)!=EOF)
    {
        if(m[a]==0)
            vec.push_back(a);
        m[a] = m[a]+1;

    }
    int len;
    len = vec.size();
    for(i=0;i<len;i++)
        cout << vec[i] << ' ' << m[vec[i]] << endl;

    return 0;
}