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

    if (n == 2)
    {
        cout << 1 << ' ' << 3 << endl;
    }
    else if (n & 1)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << 1 << ' ';
        }
        cout << endl;
    }
    else
    {
        cout << 1 << ' ' << 2 << ' ' << 3 << ' ';
        for (int i = 4; i <= n; i++)
        {
            cout << 2 << ' ';
        }
        cout << endl;
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