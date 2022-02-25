/**
 * @file inputoutput.cpp
 * @author Krunal Parekh (maya.krunal@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-02-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

/**
 * @brief Simple function.
 * Read two number and write their sum
 *
 * @return int
 */
int main()
{
    std::cout << "Enter two numbers:" << std::endl;

    int v1 = 0, v2 = 0;

    std::cin >> v1 >> v2;

    std::cout << "The sum of " << v1 << "and" << v2 << " is " << v1 + v2 << std::endl;

    return 0;
}
