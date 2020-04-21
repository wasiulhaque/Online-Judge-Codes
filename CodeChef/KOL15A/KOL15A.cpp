#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int T;
    cin >> T;
    while(T--){
        string input;
        cin >> input;
        int sum=0;
        for(int i=0;i<input.size();i++){
            if(input[i]>='1' && input[i]<='9'){
                sum = sum + input[i] - '1' + 1;
//                cout << "Entered" << endl;
            }
        }

        cout << sum << endl;
    }
}
