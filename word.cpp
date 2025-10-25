#include <iostream>
#include <algorithm>

using namespace std;

bool isUpperCase(char l_letter)
{
    if (l_letter >= 65 && l_letter <= 90)
    {
        return 1;
    }
    return 0;
}

int main()
{
    string s;
    getline(cin, s);

    int lowerCount = 0, upperCount = 0;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (isUpperCase(s[i]))
        {
            upperCount += 1;
        }
        else
        {
            lowerCount += 1;
        }
    }

    if (lowerCount == upperCount)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else if (upperCount > lowerCount)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s << "\n";
    return 0;
}