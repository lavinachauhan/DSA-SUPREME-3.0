#include<iostream>
#include<vector>
using namespace std;

vector<int> sieve(int N)
{
    vector<bool> sieve(N,true); 
    vector<int> ans;
    sieve[0] = sieve[1] = false;

    for(int i = 2; i < N; i++)
    {
        if(sieve[i] == true)
        {
            int j = i*2;
            while(j < N)
            {
                sieve[j] = false;
                j = j+i;
            }
        }
    }
    for(int i = 2; i < N; i++)
    {
        if(sieve[i] == true)
        {
            ans.push_back(i);
        }
    }
    return ans;
}

vector<int> optimisedSieve(int N)
{
    //optimisation 01: outer loop runs till i <= sqrt(N)
    vector<bool> sieve(N, true);
    vector<int> ans;
    sieve[0] = sieve[1] = false;
    for(int i = 2; i*i <= N; i++)
    {
        if(sieve[i] == true)
        {
            //optimisation 02: inner loop start from j = i*i
            int j = i*i;
            while(j <= N)
            {
                sieve[j] = false;
                j = j + i;
            }
        }
    }   
    for(int i = 2; i <= N; i++)
    {
        if(sieve[i] == true)
        {
            ans.push_back(i);
        }   
    }
    return ans;
}

int main()
{
    int N;
    cout << "Enter the value of N: " << endl;
    cin >> N;
  //  vector<int> ans = sieve(N);
    vector<int> ans = optimisedSieve(N);
    cout << "Primes between 0 to N-> " << endl;
    for(auto i:ans)
    {
        cout << i << " ";
    }
    return 0;
}