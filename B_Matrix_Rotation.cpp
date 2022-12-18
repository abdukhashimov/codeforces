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
    int array[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> array[i][j];
        }
    }

    int f = 1;
    for (int i = 0; i < 4; i++)
    {
        if (
            array[0][0] < array[1][0] and array[0][0] < array[0][1] and array[0][1] > array[0][0] and array[0][1] < array[1][1] and array[1][0] < array[1][1])
        {
            f = 0;
            break;
        }

        int a = array[0][0];
        array[0][0] = array[1][0];
        array[1][0] = array[1][1];
        array[1][1] = array[0][1];
        array[0][1] = a;
    }

    if (f == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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