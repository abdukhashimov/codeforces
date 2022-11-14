#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    string username;
    map<char, int> countMap;
    getline(cin, username);

    for (int i = 0; i < username.size(); i++)
    {
        countMap[username.at(i)]++;
    }

    if (countMap.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}
