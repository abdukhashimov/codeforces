#include <iostream>
#include <vector>
#include <deque>
#include <cmath>

using namespace std;

void funnyPermutation(int n)
{
    if (n == 3)
    {
        cout << "-1" << endl;
        return;
    }

    vector<int> dq;
    int size = ceil(n / 2.0);
    bool exists;

    for (int i = n; i >= 1; i--)
    {
        dq.push_back(i);
    }

    for (int i = size; i >= 1; i--)
    {
        dq[n - i] = size - i + 1;
    }

    for (auto &&i : dq)
    {
        cout << i << " ";
    }

    cout << endl;
}

int main(int argc, char const *argv[])
{
    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        funnyPermutation(n);
    }

    return 0;
}