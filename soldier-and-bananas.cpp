#include <iostream>

using namespace std;

int main()
{
    int cost_first_banana, init_dollars, num_of_banana;

    cin >> cost_first_banana >> init_dollars >> num_of_banana;

    int borrow_amount = 0, total_cost = 0;

    for (int i = 0; i <= num_of_banana; i++)
    {
        total_cost += (cost_first_banana * i);
    }

    if (total_cost != init_dollars)
    {
        borrow_amount += (total_cost - init_dollars);
    }

    if (borrow_amount < 0)
    {
        borrow_amount = 0;
    }

    cout << borrow_amount << "\n";

    return 0;
}