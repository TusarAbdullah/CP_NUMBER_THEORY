

#include<bits/stdc++.h>
using namespace std;
#define tusar() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

const int mx = 1e7+123;
vector<int> v[mx];

int main()
{
    tusar();

    int lim = 10;

    for(int i=1; i<=lim; i++)
        {
            for(int j=i; j<=lim; j+=i)
                {
                    v[j].push_back(i);
                }
        }

    for(int i=1; i<=lim; i++)
        {
            cout<<i<<" : ";
            for(auto u : v[i]){
                cout<<u<<" ";
            }cout<<endl;
        }


    return 0;
}

/***************************************************
****************************************************
****************************************************

1 : 1
2 : 1 2
3 : 1 3
4 : 1 2 4
5 : 1 5
6 : 1 2 3 6
7 : 1 7
8 : 1 2 4 8
9 : 1 3 9
10 : 1 2 5 10

*/
