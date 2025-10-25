#include <iostream>

int main()
{
    int weight;
    std::string result;
    std::cin >> weight;

    if (weight % 2 == 0 && weight > 2)
    {
        result = "YES";
    }
    else
    {
        result = "NO";
    }

    std::cout << result << std::endl;
    return 0;
}

/*
   --- PROBLEM BREAKDOWN
   case: 1
   - The w kilos should be divided into two parts.
   case 2
   - Each part must be even numbers.
   case 3
   - Print YES, if the w kilos divided two part and both parts are even numbers, otherwise NO.

   info
   - w kilos is an integer number from 1 to 100;
*/