#pragma once
#include <iostream>

int NWD(int lhs, int rhs)
{
    if (rhs != 0)
    {
        return NWD(abs(rhs), abs(lhs) % abs(rhs));
    }

    return lhs;
}

int NWW(int lhs, int rhs)
{
    if (lhs == 0 || rhs ==0) {
        return 0;
    }
    return abs(lhs) / NWD(lhs, rhs) * abs(rhs);
}
