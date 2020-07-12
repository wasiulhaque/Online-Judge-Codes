#include<bits/stdc++.h>
using namespace std;

map<string,string> m;
std::map<string,string>::iterator it;

int main()
{
    string init,changed;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> init >> changed;
        if(m.count(init)==0)
        {
            m[changed] = init;
        }

        else
        {
            m[changed] = m[init];
            m.erase(init);

        }
    }

    cout << m.size() << endl;

    for(it=m.begin(); it!=m.end(); it++)
    {
        cout << it->second << " " << it->first << endl;
    }

    return 0;
}