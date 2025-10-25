#include <iostream>

int main()
{
    const std::string i1 = "X++";
    const std::string i2 = "++X";
    const std::string d1 = "X--";
    const std::string d2 = "--X";

    int t;
    std::string stment;
    int result = 0;

    std::cin >> t;

    while (t--)
    {
        std::cin >> stment;

        if (stment == i1 || stment == i2)
        {
            result += 1;
        }else if(stment == d1 || stment == d2) {
            result -= 1;
        }
    }

    std::cout << result << std::endl;

    return 0;
}

/*
----- PROBLEM BREAKDOWN
Case 1
- There are two operations - Increase and Decrease (X++, --X).
Case 2
- The variable initial value is 0.
Case 3
- The operation and the variable can be written in any order. Like (++X, X--, --X, X++)

--- INPUT
1. The number of statements as an integer FROM 1 to 150
2. N lines contain a statement each. like (X--, ++X)

--- OUTPUT
1. Print a single integer — the final value of x.
*/