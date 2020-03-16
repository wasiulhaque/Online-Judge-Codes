#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool isPrime = true;
    cin >> n;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            isPrime = false;
        }
    }
    if(isPrime==true)
        cout << "Yes";
    else
        cout << "No";
}
