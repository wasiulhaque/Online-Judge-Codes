#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    int i,j,flag=0,len_a,len_h,k;
    cin>>T;
    while(T--)
    {
        string a,h;
        flag=0;
        cin>>a>>h;
        len_a=a.size();
        len_h=h.size();
        if(len_a>len_h)
        {
            cout<<"NO"<<endl;
            continue;
        }
        sort(a.begin(),a.end());
        for(i=0; i<=(len_h-len_a); i++)
        {
            string s=h.substr(i,len_a);
            sort(s.begin(),s.end());
            if(s==a)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}