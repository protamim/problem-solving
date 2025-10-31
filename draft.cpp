#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if (n * n - 1 == k)
        {
            cout << "NO \n";
        }
        else
        {
            cout << "YES \n";

            int temp = n, x;
            while (n--)
            {
                x = temp;
                while (x--)
                {
                    if (k != 0)
                    {
                        cout << "U";
                        k--;
                    }
                    else
                    {
                        if (x == 0 && n != 0)
                        {
                            cout << "D";
                        }
                        else if (x == 0 && n == 0)
                        {
                            cout << "L";
                        }
                        else
                        {
                            cout << "R";
                        }
                    }
                }
                cout << endl;
            }
        }
    }

    return 0;
}