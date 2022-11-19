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

int findMin(map<int, bool> numbers, int x, int key, int r, int l, vector<int> items)
{
    vector<int> nums;

    if (numbers.find(key) != numbers.end())
    {
        return 0;
    }

    if (numbers.size() == l - r)
    {
        return -1;
    }

    for (auto &&item : items)
    {
        for (int i = x; i + item <= r; i++)
        {
            if (numbers.find(i + item) == numbers.end())
            {
                numbers[i + item] = true;
                nums.push_back(i + item);
            }
        }

        for (int i = x; item - i >= l; i++)
        {
            if (numbers.find(item - i) == numbers.end())
            {
                numbers[item - i] = true;
                nums.push_back(item - i);
            }
        }
    }

    if (nums.size() == 0)
    {
        return -1;
    }

    return findMin(numbers, x, key, r, l, nums) + 1;
}

void solve()
{
    int l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;
    map<int, bool> numbers = {{a, true}};

    cout << findMin(numbers, x, b, r, l, {a}) << endl;
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