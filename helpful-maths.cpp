#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    sort(s.begin(), s.end());

    for (size_t i = 0; i < s.length(); i++)
    {
        bool last = s.length() - 1 == i;
        if (isdigit(s[i]))
        {
            cout << s[i] << (!last ? "+" : "");
        }
    }
    cout << "\n";

    return 0;
}