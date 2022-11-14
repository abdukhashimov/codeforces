#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int k, n, w;
    int sum = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        sum += i * k;
    }

    if (n - sum > 0)
    {
        cout << 0;
    }
    else
    {
        cout << sum - n;
    }
    return 0;
}
