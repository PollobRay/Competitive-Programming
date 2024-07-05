//
// Created by Ray on 6/9/2022.
//
/*
#include <iostream>
#include <cmath>
using namespace std;

int prime[300000]; //to store primes
int nPrime; // to counter of primes
bool mark[1000002]; //true if not prime false if prime
int primesFact[10000]; //store power of prime fact.
void sieve(int n)
{
    int limit=sqrt(n*1.)+2;

    mark[1]=true; //1 is not prime
    for (int i = 4; i <=n ; i=i+2) // all even is not prime
    {
        mark[i]=true;
    }
    if(n<=1)
        return;

    prime[nPrime++]=2;// 2 is prime

    for (int i = 3; i <=n ; i=i+2) // run only for odd
    {
        if(!mark[i]) // if i is prime
        {
            prime[nPrime++]=i;

            if(i<=limit) // i*i may overflow
            {
                //loop only run for odd multiples of i
                for (int j = i*i; j <=n ; j=j+i*2)
                {
                    mark[j]=true;
                }
            }
        }
    }
}
void primeFactorization(int n)
{
    sieve(n);
    for (int i = 0; i < nPrime && prime[i]<=n; ++i)
    {
        if (n%prime[i]==0)
        {
            while (n%prime[i]==0)
            {
                n=n/prime[i];
                primesFact[prime[i]]++;
            }
        }
    }

}
void NOD(int n)
{
    primeFactorization(n);
    int nod=1;
    for (int i = 0; i <nPrime ; ++i)
    {
        nod*=primesFact[prime[i]]+1;
    }
    cout<<"Total number of Divisor : "<<nod<<endl;
}

int main()
{
    NOD(10);

    return 0;
}
*/