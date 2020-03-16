#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum, n;
    cin >> sum;
    for(int i=0;i<3;i++){
    cin >> n;
    sum = sum - n;
    }
    cout << sum;
}
