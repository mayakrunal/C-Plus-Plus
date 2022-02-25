/**
 * @file while.cpp
 * @author Krunal Parekh (maya.krunal@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

int main()
{
    int sum = 0, val = 1;
    // keep executing the while as long as val is less then or equal to 10
    while (val <= 10)
    {
        sum += val;
        ++val;
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

    return 0;
}
