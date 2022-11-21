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
    int l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;
    int d1 = abs(a - l);
    int d2 = abs(r - a);
    int d3 = abs(b - l);
    int d4 = abs(r - b);

    if (a == b)
    {
        cout << 0 << endl;
    }
    else if (abs(a - b) >= x)
    {
        cout << 1 << endl;
    }
    else if ((d1 < x && d2 < x) || (d3 < x && d4 < x))
    {
        cout << -1 << endl;
    }
    else
    {
        if (d1 < x)
        {
            if (d4 >= x)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 3 << endl;
            }
        }
        else if (d2 < x)
        {
            if (d3 >= x)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 3 << endl;
            }
        }
        else
        {
            cout << 2 << endl;
        }
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