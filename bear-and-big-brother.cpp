#include <iostream>

using namespace std;

int main()
{
    int limak, bob, yearCount = 0;
    cin >> limak >> bob;

    while (limak <= bob)
    {
        if (limak <= bob)
        {
            limak = limak * 3;
            bob = bob * 2;
            yearCount += 1;
        }
    }

    cout << yearCount << "\n";
    return 0;
}

// Link => https://codeforces.com/problemset/problem/791/A