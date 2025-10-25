#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool grater(int i, int j) { return (i > j); }

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long sum_all = 0;
        vector<int> odd_nums;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] % 2 == 0)
            {
                sum_all += a[i];
            }
            else
            {
                odd_nums.push_back(a[i]);
            }
        }

        if (odd_nums.empty())
        {
            sum_all = 0;
        }

        sort(odd_nums.begin(), odd_nums.end(), grater);
        const int take = ceil((odd_nums.size()) / 2.0);

        for (int i = 0; i < take; i++)
        {
            sum_all += odd_nums[i];
        }

        cout << sum_all << endl;
    }

    return 0;
}

/*
- Problem overview
mowerOff = true // initially
mower toggles if odd numbers only

If FJ visits the n fields in optimal order, what is the maximum total number of dandelions he can cut?

- CASE 1
6
9 10 7 7 3 9
Explanation:
9 - (odd, mower turned on, cut the field)
10 - (even, mower still on, cut the field)
7 - (odd, mower turn off, no cut)
7 -(odd, mower turn on, cut the field)
3 - (odd, mower turn off, no cut)
9 - (odd, mower turn on, cut the field)
Result = 9 + 10 + 7 + 9 = 35

- CASE 2
6
3 7 9 10 7 9
Explanation:
3 - (odd, mower turned on, cut the field)
7 - (odd, mower off, no cut)
9 - (odd, mower on, cut the field)
10 - (even, mower still on, cut the field)
7 - (odd, mower off, no cut)
9 - (odd, mower on, cut the field)
result = 3+9+10+9 = 31 - (wrong ans)

- Try with another approach
total sum = 45;
odd numbers = 3,7,9,7,9 - sorted desc (9,9,7,7,3)
sorted len = 5;
toggle odd = 5/2
*/