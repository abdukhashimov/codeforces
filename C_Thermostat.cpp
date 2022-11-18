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

int findMin(map<int, bool> numbers, int x, int dest, int max_num, int min_num)
{
    if (numbers.find(dest) != numbers.end())
    {
        return 0;
    }

    for (auto &[key, value] : numbers)
    {
        for (int i = x; i <= max_num; i++)
        {
            if (key + i <= max_num)
            {
                numbers[key + i] = true;
            }
        }

        for (int i = min_num; i <= x; i++)
        {
            if (i >= 0 && key - i <= max_num && key - i >= min_num)
            {
                numbers[key - i] = true;
            }
        }
    }

    for (auto &&key : numbers)
    {
        cout << key.first << endl;
    }

    return 1 + findMin(numbers, x, dest, max_num, min_num);
}

void solve()
{
    int l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;
    map<int, bool> numbers = {
        {a, true}};

    cout << findMin(numbers, x, b, r, l) << endl;
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