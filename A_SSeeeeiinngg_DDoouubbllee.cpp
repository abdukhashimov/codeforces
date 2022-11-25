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
    string input;
    deque<char> dq;

    cin >> input;

    for (int i = 0; i < input.size(); i++)
    {
        dq.push_back(input.at(i));
        dq.push_front(input.at(i));
    }

    for (int i = 0; i < dq.size(); i++)
    {
        cout << dq[i];
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