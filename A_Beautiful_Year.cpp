#include <iostream>
#include <deque>
#include <map>

using namespace std;

bool checkIsBeautiful(int number)
{
    map<int, bool> nums;

    while (number > 0)
    {
        int temp = number % 10;
        if (nums.find(temp) != nums.end())
        {
            return false;
        }
        else
        {
            nums[temp] = true;
        }

        number /= 10;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    int year;
    deque<int> nums;
    map<int, int> numsCount;
    cin >> year;

    do
    {
        year++;
    } while (!checkIsBeautiful(year));

    cout << year << endl;

    return 0;
}
