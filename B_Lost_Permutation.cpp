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
    int n, sum_missing;
    cin >> n >> sum_missing;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int max_num = v.back();
    for (int i = 1; i <= max_num; i++)
    {
        auto it = find(v.begin(), v.end(), i);
        if (it == v.end())
        {
            sum_missing -= i;
        }
    }

    int next_number = v.back();
    next_number++;
    while (next_number <= sum_missing)
    {
        v.push_back(next_number);
        sum_missing -= next_number;
        next_number++;
    }

    if (sum_missing == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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