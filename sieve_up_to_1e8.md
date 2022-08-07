#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0), cin.tie(0)
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define f2(i, n) for (int i = 1; i < n; i++)
#define endl "\n"
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pi pair<int, int>
#define all(x) x.begin(), x.end()
#define ff first
#define ss second
#define int long long
#define INF 1000000000
#define mod 1000000007
int Ceil(int a, int b)
{
    return a / b + (a % b != 0);
}

vector<int> vec;
int n = 100000009;
vector<bool> prime(n + 1, 1);
void SieveOfEratosthenes()
{
    prime[0]=prime[1] = 0;
    for(int i = 4; i<n; i+=2){
        prime[i] = 0;
    }
    for (int p = 3; p * p <= n; p += 2)
    {
        if (prime[p])
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = 0;
        }
    }
    vec.pb(2);
    for (int i = 3; i < n; i+=2)
    {
        if (prime[i])
        {
            vec.push_back(i);
        }
    }
}
void sol()
{
    
}

int32_t main()
{
    FastIO;
    SieveOfEratosthenes();
    int tt;
    tt = 1;
    // cin>>tt;
    while (tt--)
    {
        sol();
    }
}