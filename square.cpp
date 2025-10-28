#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        vector<int> sticks(4);
        for (size_t i = 0; i < sticks.size(); i++)
        {
            cin >> sticks[i];
        }

        int f = sticks[0];
        int same_nums_cout = 0;
        for (size_t i = 0; i < sticks.size(); i++)
        {
            if (f == sticks[i])
            {
                same_nums_cout += 1;
            }
        }

        if (same_nums_cout == 4)
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