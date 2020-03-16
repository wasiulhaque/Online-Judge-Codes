#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T, mamla = 0, i ;
    int N;
    cin >> T;
    while(T--)
    {
        cin >> N;
        string subjects[100], leftToDo;
        int D[100],daysToDo;
        for (i =0; i<N; i++)
        {
//        cin >> subjects[i];
            cin >> subjects[i];
            cin >> D[i];
//        cout << D[i];
        }
        cin >> daysToDo >> leftToDo;
//       fflush(stdin);
        cout << "Case " << ++mamla << ": ";
        for(i=0; i<N; i++)
        {
            if(subjects[i] == leftToDo)
            {
                if(daysToDo >= D[i])
                    cout << "Yesss" << endl;
                else if(daysToDo+5 >= D[i])
                    cout << "Late" << endl;
                else
                    cout <<   "Do your own homework!"<< endl;
                break;
            }
        }
        if(i==N) // Subject not in the list
            cout << "Do your own homework!" << endl;
    }
    return 0;
}