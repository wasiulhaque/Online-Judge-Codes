#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin >> input;
    int i;
    int len = input.size();
    for(i=0;i<  len;i+2){
        if(i+2<=len-1){
            if(input[i]>input[i+2]){
                swap(input[i],input[i+2]);
            }
        }
    }
    cout << input << endl;
}
