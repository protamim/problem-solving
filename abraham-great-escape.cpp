#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int gs = n * n;

        if (gs - 1 == k)
        {
            cout << "NO \n";
        }
        else
        {
            cout << "YES \n";
            int cc = 0;
            int dcs = gs - k;

            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    cc += 1;
                    if (gs == k || cc <= k)
                    {
                        cout << "U";
                    }
                }
                cout << endl;
            }
        }
    }

    return 0;
}

/*
---- PROBLEM SUMMARY ----
The maze is an n*n grid with an arrow in each cells that points in one of four directions: up, down, right, and left.

*/