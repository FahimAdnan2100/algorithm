#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node,edge,n,m;
    int a[10][10];
    cin>>node>>edge;
    vector<int>vec[edge];


    for(int i=0; i<edge; i++)
    {
        cin>>n>>m;
        vec[n].push_back(m);
    }
    cout<<endl<<" GRAPH "<<endl;
    for(int i=0; i<node; i++)
    {
        cout<<i<<" -> ";
        for(int j=0; j<vec[i].size(); j++)
        {
            cout<<vec[i][j]<<" -> ";
            a[i][vec[i][j]]=1;
           //cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<" MATRIX "<<endl;
    for(int i=0; i<node; i++)
    {

        for(int j=0; j<node; j++)
        {
           // cout<<a[i][j]<<" ";
            if(a[i][j] == 1)
            {
                cout<<"1 ";
            }
            else
            {
                cout<<"0 ";
            }

        }
        cout<<endl;
    }





}

/*
7 11
0 1
0 2
0 3
1 3
2 3
1 5
3 4
2 6
5 6
5 4
6 4


*/


