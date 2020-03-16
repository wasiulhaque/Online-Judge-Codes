#include<bits/stdc++.h>
using namespace std;
map<int,string>stockList;
map<string,int>stockCheck;
set<int>costSet;
int main()
{
    int N,i,input,cost, minValue;
    string stock;
    cin >> N;

    for(i=0; i<N; i++)
    {
        cin >> input;
        if(input==1)
        {
            cin >> stock >> cost;
            costSet.insert(cost);
            stockList[cost]=stock;
            stockCheck[stock]=cost;
        }
        else if(input==2)
        {
            cin >> stock >> cost;
            costSet.erase(stockCheck[stock]);
            costSet.insert(cost);
            stockList[cost]=stock;
            stockCheck[stock]=cost;
        }
        else
        {
            cin >> stock;
            minValue = *(costSet.begin());
            costSet.erase(minValue);
            cout << stockList[minValue] << " " <<i+1 << endl;
        }
    }
}