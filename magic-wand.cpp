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
        int nt;
        cin >> nt;

        vector<int> toys(nt);
        int ec = 0;
        int oc = 0;
        for (int i = 0; i < nt; i++)
        {
            cin >> toys[i];
            if (toys[i] % 2 == 0)
            {
                ec += 1;
            }
            else
            {
                oc += 1;
            }
        }

        if (ec == nt || oc == nt)
        {
            for (auto toy : toys)
            {
                cout << toy << " ";
            }
            cout << endl;
        }
        else if (ec < nt)
        {
            sort(toys.begin(), toys.end());
            for (auto toy : toys)
            {
                cout << toy << " ";
            }
            cout << endl;
        }
    }

    return 0;
}