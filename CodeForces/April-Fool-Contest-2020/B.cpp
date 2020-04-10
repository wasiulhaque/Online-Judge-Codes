#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
   int n, ans;
   cin >> n;
   int i;
   for(i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
			ans = i;
    cout << ans << n/ans << endl;
}
