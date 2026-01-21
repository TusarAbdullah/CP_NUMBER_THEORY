
#include<bits/stdc++.h>
using namespace std;
#define tusar() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

const int mx = 1e7+123;


bitset<mx> isPrime;
//bool isPrime[mx];


vector<int> primes;


void primeGen(int n)
{
    for(int i=3; i<=n; i+=2)isPrime[i] = 1;

    int sq = sqrt(n);

    for(int i=3; i<=sq; i+=2)
        {
            if(isPrime[i])
                {

                    for(int j=i*i; j<=n; j+=i)
                        {
                            isPrime[j] = 0;
                        }

                }
        }




    primes.push_back(2);
    for(int i=3; i<=n; i+=2)
        {
            if(isPrime[i] == 1)
                {
                    primes.push_back(i);
                }
        }


}


int main()
{
    tusar();

    int lim = 20;
    primeGen(lim);

    for(int i=0; i<primes.size(); i++)
        {
            cout<<primes[i]<<endl;
        }


    return 0;
}




/***************************************
****************************************
****************************************

2
3
5
7
11
13
17
19

TIME COMP = O(n)

*/

