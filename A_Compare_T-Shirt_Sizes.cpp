#include <iostream>
#include <string.h>
#include <unordered_map>

using namespace std;

void tShirt(string first, string second)
{
    char lastFirst;
    char lastSecond;

    unordered_map<char, int> mapSizes = {
        {'S', -10},
        {'M', 20},
        {'L', 30},
    };

    lastFirst = first.at(first.length() - 1);
    lastSecond = second.at(second.length() - 1);

    if (mapSizes[lastFirst] == mapSizes[lastSecond])
    {
        int xCountFirst = first.length() - 1;
        int xCountSecond = second.length() - 1;

        if (xCountFirst * mapSizes[lastFirst] > xCountSecond * mapSizes[lastSecond])
        {
            cout << ">" << endl;
        }
        else if (xCountFirst * mapSizes[lastFirst] < xCountSecond * mapSizes[lastSecond])
        {
            cout << "<" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }
    else if (mapSizes[lastFirst] > mapSizes[lastSecond])
    {
        cout << ">" << endl;
    }
    else
    {
        cout << "<" << endl;
    }
}

int main(int argc, char const *argv[])
{
    int t;
    string first;
    string second;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> first >> second;
        tShirt(first, second);
    }

    return 0;
}
