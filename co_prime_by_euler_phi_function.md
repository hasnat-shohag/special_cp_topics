[How to Calculate Co Prime:](https://www.youtube.com/watch?v=epLcsjsH8YY&t=6s)\
[Euler totient function:](https://cp-algorithms.com/algebra/phi-function.html#implementation)\
[Efficient Code:](https://ideone.com/p9E23k)

Code:

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
    #define sc second
    #define int long long
    #define INF 1000000000
    #define mod 1000000007
    int Ceil(int a, int b)
    {
        return a / b + (a % b != 0);
    }

    vector<int> phi(1e5 + 1);
    void phi_1_to_n(int n)
    {
        for (int i = 0; i <= n; i++)
            phi[i] = i;

        for (int i = 2; i <= n; i++)
        {
            if (phi[i] == i)
            {
                for (int j = i; j <= n; j += i)
                    phi[j] -= phi[j] / i;
            }
        }
    }
    void sol()
    {
        int n;
        cin >> n;
        cout <<phi[n]  << endl;
    }

    int32_t main()
    {
        FastIO;
        phi_1_to_n(1e5);
        int tt;
        tt = 1;
        cin >> tt;
        while (tt--)
        {
            sol();
        }
    }