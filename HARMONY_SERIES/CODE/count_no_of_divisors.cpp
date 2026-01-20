
#include<bits/stdc++.h>
using namespace std;
#define tusar() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

const int mx = 1e7+123;
int cnt[mx];

int main()
{
    tusar();

    int lim = 10;

    for(int i=1; i<=lim; i++)
        {
            for(int j=i; j<=lim; j+=i)
                {
                    cnt[j]++;
                }
        }

    for(int i=1; i<=lim; i++)
        {
            cout<<i<<" : "<<cnt[i]<<endl;
        }


    return 0;
}

/***************************************************
****************************************************
****************************************************

1 : 1
2 : 2
3 : 2
4 : 3
5 : 2
6 : 4
7 : 2
8 : 4
9 : 3
10 : 4

*/
