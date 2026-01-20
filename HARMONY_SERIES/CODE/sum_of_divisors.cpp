

#include<bits/stdc++.h>
using namespace std;
#define tusar() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

const int mx = 1e7+123;
int v[mx];

int main()
{
    tusar();

    int lim = 10;

    for(int i=1; i<=lim; i++)
        {
            for(int j=i; j<=lim; j+=i)
                {
                    v[j]+=i;
                }
        }

    for(int i=1; i<=lim; i++)
        {
            cout<<i<<" : "<<v[i]<<endl;
        }


    return 0;
}

/***************************************************
****************************************************
****************************************************

1 : 1
2 : 3
3 : 4
4 : 7
5 : 6
6 : 12
7 : 8
8 : 15
9 : 13
10 : 18

*/

