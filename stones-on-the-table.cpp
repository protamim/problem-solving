#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    int stones;
    cin >> stones;
    string colors;
    while (colors.size() != (size_t)stones)
    {
        char s_col;
        cin >> s_col;
        colors.push_back(s_col);
    }

    int count = 0;
    transform(colors.begin(), colors.end(), colors.begin(), ::tolower);

    for (size_t i = 0; i < colors.size(); i++)
    {
        if(colors[i] == colors[i+1]) {
            count +=1;
        }
    }

    cout  << count << "\n";
    return 0;
}

/*
Description ---
Count the minimum number of stones to take from the table so that any two neighboring stones had different color.
EXAMPLE: red, blue, green, blue, green, red, and so on.

Possible cases ---
- CASE 1
stones = rgb
qualified = 0

- CASE 2
stones = gbbg
qualified = 1

- CASE 3
stones = gggg
qualified = 3

- CASE 4
stones = rrggbb
qualified = 3
*/