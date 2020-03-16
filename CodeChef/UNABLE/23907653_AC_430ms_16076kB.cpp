#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--){
        int n,m;
        cin >> n >> m;
        string s;
        cin >> s;
        int i, j;
        char x,y, a[26];
        for(i=0;i<26;i++){
            a[i] = 'a' + i;
        }
        for(i=0;i<m;i++){
            cin >> x >> y;
            for(j=0;j<26;j++)
            {
                if(a[j]==x)
                    a[j] = y;
                else if(a[j]==y)
                    a[j] = x;
            }
        }

        int len = s.size();
        for(i=0;i<len;i++){
            int index = s[i] - 'a';
            s[i] = a[index];
        }

        cout << s << endl;

    }
}