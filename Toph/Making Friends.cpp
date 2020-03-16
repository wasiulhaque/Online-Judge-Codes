#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,Count=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            Count++;
        }
    }
    cout << Count-1;
}
