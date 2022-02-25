/**
 * @file helloworld.cpp
 * @author Krunal Parekh (maya.krunal@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * @brief The main method.
 * Reads a vector of stings and prints them out to console
 * 
 * @return int 
 */
int main()
{
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}