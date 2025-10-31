#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long R0, X, D;
        int n;
        cin >> R0 >> X >> D >> n;
        string s;
        cin >> s;

        long long L = R0, R = R0;
        int cnt = 0;

        for (char c : s)
        {
            if (c == '1')
            {
                L = max(0LL, L - D);
                R = R + D;
                cnt++;
            }
            else
            {
                if (L >= X)
                {
                    continue;
                }
                else if (R < X)
                {
                    L = max(0LL, L - D);
                    R = R + D;
                    cnt++;
                }
                else
                {
                    L = max(0LL, L - D);
                    R = min(R + D, X - 1);
                    cnt++;
                }
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}
