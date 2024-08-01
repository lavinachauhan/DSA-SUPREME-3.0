#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
// 191	193	197	199	211	223	227
// 229	233	239	241	251	257	263	269	271	277
// 281	283

vector<bool> Sieve(int N)
{
    vector<bool> sieve(N, true);
    sieve[0] = sieve[1] = true;

    for(int i = 2; i*i <= N; i++)
    {
        if(sieve[i] == true)
        {
            int j = i*i;
            while(j <= N)
            {
                sieve[j] = false;
                j = j + i;
            }
        }
    }
    return sieve;
}

vector<bool> segmentedsieve(int L, int R)
{
    //step 01: make a sieve of size sqrt(R)
    int N = sqrt(R);
    vector<int> primes;
    vector<bool> sieve = Sieve(N);

    for(int i = 2; i <= N; i++)
    {
        if(sieve[i] == true)
        {
            primes.push_back(i);
        }   
    }
    vector<bool> segSieve(R-L+1, true);
    if(L == 1)
    {
        segSieve[0] = false;
    }
    for(auto i:primes)
    {
        int first_multiple = (L/i)*i;
        if(first_multiple < L)
        {
            first_multiple += i; 
        }
    
        int j = max(first_multiple, i*i);

        while(j <= R)
        {
            segSieve[j-L] = false;
            j = j + i;
        }
    }
    return segSieve;
}

int main()
{
    int L, R;
    cout << "Enter the value of L->" << endl;
    cin >> L;
    cout << "Enter the value of R->" << endl;
    cin >> R;

    vector<int> ans;
    vector<bool> segSieve = segmentedsieve(L,R);
    for(int i = 2; i < (R-L+1); i++)
    {
        if(segSieve[i] == true)
        {
            ans.push_back(i+L);
        }
    }
    for(auto i:ans)
    {
        cout << i << " ";
    }
    return 0;
}