#include <iostream>
#include <vector>

using namespace std;

int findFirstMissing(vector<int> array,
                     int start, int end)
{
    if (start > end)
        return end + 1;

    if (start != array[start])
        return start;

    int mid = (start + end) / 2;

    if (array[mid] == mid)
        return findFirstMissing(array,
                                mid + 1, end);

    return findFirstMissing(array, start, mid);
}

void solution(vector<int> &numbers)
{
}

int main(int argc, char const *argv[])
{
    int t, temp, size;
    vector<int> numbers;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cin >> temp;
            numbers.push_back(temp);
        }

        solution(numbers);
    }

    return 0;
}
