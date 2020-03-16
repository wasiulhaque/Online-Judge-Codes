#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double sum=0;
    int N;
    cin >> N;
    long double a[N];
    for(int i=1;i<=N;i++){
        int x;
        cin >> x;
        sum = sum + x;
        cout << sum/i << endl;
    }
}



