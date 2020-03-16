#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n1, n2, n3, sum1 = 0, sum2 = 0, sum3 = 0;
    int t1 = 0, t2 = 0, t3 = 0;
    int flag=0;
    cin >> n1 >> n2 >> n3;
    vector<int> s1(n1);
    for(int i = 0; i < n1; i++){
       cin>>s1[i];
       sum1 += s1[i];
    }
    vector<int> s2(n2);
    for(int i = 0; i < n2; i++){
       cin>>s2[i];
       sum2 += s2[i];
    }
    vector<int> s3(n3);
    for(int i = 0; i < n3; i++){
       cin>>s3[i];
       sum3 += s3[i];
    }
    if(sum1 == sum2 && sum2 == sum3) {
        flag = 1;
    }
    while(flag==0) {
        if(sum1 >= sum2 && sum1 >= sum3) {
            sum1 -= s1[t1++];
        }
        else if(sum2 >= sum1 && sum2 >= sum3) {
            sum2 -= s2[t2++];
        }
        else if(sum3 >= sum1 && sum3 >= sum2) {
            sum3 -= s3[t3++];
        }
        if((sum1 == sum2 && sum2 == sum3) || (sum1 == 0 && sum2 == 0 && sum3 == 0)) {
            flag = 1;
        }
    }
    cout<<sum1<<endl;
    return 0;
}