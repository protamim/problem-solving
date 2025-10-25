#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<std::string> cars = {"BMW", "Audi", "Toyota", "Ford", "BMW", "Toyota"};

    // auto it = std::adjacent_find(cars.begin(), cars.end());

    std::vector<std::string>::iterator it;
    it = cars.end() -1;

    std::cout << *it << std::endl;
    return 0;
}