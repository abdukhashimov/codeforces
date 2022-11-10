#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void minimize_thickness(vector<int> &numbers)
{
    sort(numbers.begin(), numbers.end(), greater<>());

    for (auto &&i : numbers)
    {
        cout << i << endl;
    }
}

int main(int argc, char const *argv[])
{
    int t, length, temp;
    vector<int> numbers;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> length;
        for (int i = 0; i < length; i++)
        {
            cin >> temp;
            numbers.push_back(temp);
        }
    }

    minimize_thickness(numbers);

    return 0;
}
