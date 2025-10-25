#include <iostream>
#include <algorithm>

int main()
{

    std::string first_s, second_s;

    std::cin >> first_s >> second_s;

    // transform to lowercase
    std::transform(first_s.begin(), first_s.end(), first_s.begin(), ::tolower);
    std::transform(second_s.begin(), second_s.end(), second_s.begin(), ::tolower);

    int result;
    result = first_s.compare(second_s);

    if (result < 0)
    {
        std::cout << -1 << std::endl; // less than second string
    }
    else if (result > 0)
    {
        std::cout << 1 << std::endl; // less than first string
    }
    else if (result == 0)
    {
        std::cout << 0 << std::endl; // equal
    }

    return 0;
}

/*
REFERENCE - https://www.ascii-code.com/

Example:
abs - in the ASCII table at Lowercase (a = 97, b = 98, s = 115)
*/ 