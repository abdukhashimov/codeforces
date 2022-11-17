#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define tc     \
    ll tc;     \
    cin >> tc; \
    while (tc--)
#define pb push_back
#define mp make_pair
const ll MOD = 1e9 + 7;

void fastio()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int total = 0;
    total = accumulate(v.begin(), v.end(), total);
    int max_grouped = -1;

    for (int i = n; i > 1; i--)
    {
        int maxCount = 0;
        if (total % i != 0)
        {
            continue;
        }

        int expected_sum = total / i;
        int sum = 0;
        int prev = 0;
        for (int j = 0; j < v.size(); j++)
        {
            sum += v[j];
            if (sum == expected_sum)
            {
                sum = 0;
                maxCount = max(j - prev, maxCount);
                prev = j;

                if (j == v.size() - 1)
                {
                    max_grouped = maxCount;
                }
            }
        }
    }

    if (max_grouped < 0)
    {
        cout << n << endl;
    }
    else
    {
        cout << max_grouped << endl;
    }
}

int main()
{
    fastio();
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        solve();
    }

    return 0;
}