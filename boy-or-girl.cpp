#include <iostream>
#include <algorithm>
#include <set>

int main()
{
    std::string user_name;

    std::cin >> user_name;
    std::transform(user_name.begin(), user_name.end(), user_name.begin(), ::tolower);

    std::set<char> distinct_chars;

    for (char c : user_name)
    {
        distinct_chars.insert(c);
    }

    if (distinct_chars.size() % 2 == 0)
    {
        std::cout << "CHAT WITH HER!" << std::endl;
    }
    else
    {
        std::cout << "IGNORE HIM!" << std::endl;
    }

    return 0;
}

/*
PROBLEM LINK: https://codeforces.com/problemset/problem/236/A

-- ALL POSSIBLE TEST CASES ---
CASE 1
- whregrh;
- qualified = 5 distinct char (IGNORE HIM!)


CASE 2
- mppttgdpt;
- qualified =
*/