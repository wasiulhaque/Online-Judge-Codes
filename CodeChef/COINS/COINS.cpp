#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll, ll>m;
ll solve(ll coin)
{
    if(coin<1)
        return 0;
    else if(coin==1)
        return coin;
    if (m[coin]!=0)
        return m[coin];
    m[coin] = max(coin,solve(coin/2)+solve(coin/3)+solve(coin/4));
    return m[coin];
}


int main()
{
    ll coin, result;
    while(cin >> coin){
        result = solve(coin);
        cout << result << endl;
    }
    return 0;
}
