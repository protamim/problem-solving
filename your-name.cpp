#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int lc;
        cin >> lc;

        vector<char> str_v(lc);
        vector<char> gf_v(lc);
        char c;

        for (int i = 0; i < lc; i++)
        {
            cin >> c;
            str_v.push_back(c);
        }

        for (int i = 0; i < lc; i++)
        {
            cin >> c;
            gf_v.push_back(c);
        }

        sort(str_v.begin(), str_v.end());
        sort(gf_v.begin(), gf_v.end());

        if (includes(str_v.begin(), str_v.end(), gf_v.begin(), gf_v.end()))
        {
            cout << "YES \n";
        }
        else
        {
            cout << "NO \n";
        }
    }

    return 0;
}