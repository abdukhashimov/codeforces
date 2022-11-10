#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        bool increasing = false;
        bool decreasing = false;

        if (arr.size() < 3)
        {
            return false;
        }

        if (arr[0] < arr[1])
        {
            increasing = true;
        }
        else
        {
            increasing = false;
        }

        for (int i = 1; i < arr.size(); i++)
        {
            if (increasing && arr[i - 1] >= arr[i])
            {
                increasing = false;
                decreasing = true;
            }

            if (increasing && arr[i - 1] >= arr[i])
            {
                return false;
            }

            if (!increasing && arr[i - 1] <= arr[i])
            {
                return false;
            }
        }

        if (increasing)
        {
            return false;
        }

        if (!increasing && !decreasing)
        {
            return false;
        }

        return true;
    }
};

int main(int argc, char const *argv[])
{
    int t;
    int temp;
    vector<int> nums;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> temp;
        nums.push_back(temp);
    }

    cout << Solution().validMountainArray(nums);

    return 0;
}
