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

bool check(vector<int> a, int start, int end)
{
    for (int i = start; i < end; i++)
    {
        if (a[i] != a[0])
        {
            return false;
        }
    }
    return true;
}

int challengingValleys(vector<int> arr, int len)
{
    if (len == 1)
        return 1;

    int start = 0;
    int cnt = 0;

    if (check(arr, 0, len))
    {
        return 0;
    }

    for (int end = 0; end < len; end++)
    {
        if (arr[start] != arr[end])
        {
            if (start == 0 && arr[end] > arr[start])
            {
                cnt++;
            }
            else if (arr[start - 1] > arr[start] && arr[end] > arr[start])
            {

                cnt++;
            }
            else if (end == len - 1 && arr[end - 1] > arr[end])
            {
                cnt++;
            }

            start = end;
        }
    }

    return cnt;
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

    if (v.size() == 1)
    {
        cout << "YES" << endl;
        return;
    }

    int count = challengingValleys(v, n);
    if (count == 1)
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
