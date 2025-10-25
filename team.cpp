#include <iostream>

int main()
{
    int prob;
    int firstNum, secNum, thirdNum;
    int count = 0;
    std::cin >> prob;

    while (prob--)
    {
        std::cin >> firstNum >> secNum >> thirdNum;

        if (firstNum == 1 && secNum == 1)
        {
            count += 1;
        }
        else if (secNum == 1 && thirdNum == 1)
        {
            count += 1;
        }
        else if (firstNum == 1 && thirdNum == 1)
        {
            count += 1;
        }
    }

    std::cout << count << std::endl;

    return 0;
}

/*
 ---- PROBLEM BREAKDOWN
 Case 1
 - Three friends decided to take programming content, they will write solution about problems that at least two of them sure about the solution. otherwise, they will not write the problem's solution.

 Case 2
 - The first input contain an integer - the number of problem in the contest. Then the n lines contain three integers each

 Case 3
 - Each integer either 0 or 1.

 Case 4
 - If the first number in the line equals 1, then Petya is sure about the problem's solution, otherwise he isn't sure.

 Case 5
 - The second number in the line shows Vasya's view on the solution, the third number in the line shows Tonya's view.

 Case 6
 -  The numbers on the lines are separated by spaces.

-----EXAMPLE INPUT
        3
        1 1 0
        1 1 1
        1 0 0

----- IN SHORT
- 1 meaning that one of them know about this problem solution, otherwise all three of them don't know about the solution.
*/