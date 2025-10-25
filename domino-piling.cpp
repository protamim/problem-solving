#include <iostream>

int main()
{
    int rect_w, rect_h;
    const int domino_w = 2;
    const int domino_h = 1;
    int result;

    std::cin >> rect_w >> rect_h;

    result = rect_w * rect_h / domino_w * domino_h;
    std::cout << result << std::endl;

    return 0;
}

/*
PROBLEM BREAKDOWN

CONSTANTS --
domino piece size = 2 * 1 (domino width = 2, domino height = 1)

INPUT ---
Rectangular board size, example: 2 * 4 (width * height).

OUTPUT ----
The maximum number of dominoes, which can be place on the board.

Possible Cases ----
Case 1
2 4
2 1 - domino pieces

- rect width 2
- rect height 4
- domino width 2
- domino height 1
Qualified = 4 dominoes

Case 1
3 3
2 1 - domino pieces

- rect width 3
- rect height 3
- domino width 2
- domino height 1
Qualified = 4 dominoes
*/