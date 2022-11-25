[Concept of MEX:](https://www.youtube.com/watch?v=DOgqx5XSSLE)\
[CF Blog:](https://codeforces.com/blog/entry/81287)\
[Efficient Code:](https://ideone.com/i7DIF1)

Code: 

    #include <bits/stdc++.h>
    using namespace std;

    #define f0(i, n) for (int i = 0; i < n; i++)
    #define f1(i, n) for (int i = 1; i <= n; i++)
    #define f2(i, n) for (int i = 1; i < n; i++)
    #define nl "\n"
    #define pb push_back
    #define mp make_pair
    #define vi vector<int>
    #define pi pair<int, int>
    #define f first
    #define sc second
    #define int long long
    int Ceil(int a, int b)
    {
        return a / b + (a % b != 0);
    }

    int32_t main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int tt;
        cin >> tt;
        while (tt--)
        {
            int n;
            cin >> n;
            set<int> st;
            f0(i, n)
            {
                int p;
                cin >> p;
                st.insert(p);
            }
            int idx = 0;
            for (auto elem : st)
            {
                if (elem != idx)
                {
                    break;
                }
                idx++;
            }
            cout << idx << nl;
        }
    }