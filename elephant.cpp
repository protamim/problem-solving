#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, steps;
    cin >> x;

    const float canMove = 5.0;
    steps = ceil(x / canMove);

    cout << steps << "\n";
    return 0;
}