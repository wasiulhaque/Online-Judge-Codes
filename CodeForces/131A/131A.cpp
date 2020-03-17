#include<bits/stdc++.h>
using namespace std;
int main()
{
    string in;
    int flag=0;
    string s;
    cin >> s;
    in = s;
        if(in[0]>=97 && in[0]<=122){
                in[0]=toupper(in[0]);
            for(int i=1;i<in.size();i++){
                if(in[i]>=65 && in[i]<=90){
                    flag++;
                    in[i]=tolower(in[i]);
                }
            }
            if(flag==in.size()-1){
                cout << in;
                return 0;
            }
        }

        else
        {
            in=s;
            for(int i=0;i<in.size();i++){
                if(in[i]>=65 && in[i]<=90){
                    flag++;
                    in[i]=tolower(in[i]);
                }
            }
            if(flag==in.size()){
                cout << in;
                return 0;
            }
        }
        cout << s;
}
