#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--){
        string n;
        int ans,in;
        int c_0=0;
        cin >> n;
        int len = n.size();
        for(int i=0;i<len;i++){
            if(n[i]!='0')
                c_0++;
        }
        cout << c_0 << endl;
        for(int i=0;i<len;i++){
            if(n[i]!='0'){
                in = len - i - 1;
                ans = n[i] - '0';
                for(int j=0;j<in;j++){
                    ans = ans * 10;
                }
                cout << ans << " ";
            }
        }
        cout << endl;
    }
}
