#pragma once
#include <vector>

int addEven(const std::vector<int> &numbers)
{
    int suma = 0;
    for (auto &element : numbers)
    {
        if (element % 2 == 0) {
            suma +=element;
        }
    }
    return suma;
}
