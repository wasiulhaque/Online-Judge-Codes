#include<bits/stdc++.h>
using namespace std;

string lowerSort(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a';
        }
    }
    sort(s.begin(), s.end());
    return s;
}

int main ()
{
    vector<string> unchanged; // all the chars unchanged input
    map<string, int> m;
    while(1)
    {
        string input;
        cin >> input;
        if (input.compare("#") == 0)
            break;
        unchanged.push_back(input);
        m[lowerSort(input)]++;
    }
    sort(unchanged.begin(), unchanged.end());
    for (int i = 0; i < unchanged.size(); i++)
    {
        if (m[lowerSort(unchanged[i])] == 1) // checking if appeared once
        {
            cout << unchanged[i] << endl;
        }
    }
}