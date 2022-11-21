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

    int max = -1;
    int second_max = -1;

    for (int element : v)
    {
        if (element > max)
        {
            second_max = max;
            max = element;
        }
        else if (element > second_max)
        {
            second_max = element;
        }
    }

    for (auto &&i : v)
    {
        if (i == max)
        {
            cout << i - second_max << " ";
        }
        else
        {
            cout << i - max << " ";
        }
    }
    cout << endl;
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