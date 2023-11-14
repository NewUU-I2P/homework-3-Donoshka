#include <string>

std::string problemSolution3(float height, char S)
{
    if (S == 'm')
    {
        if (height < 1.7)
            return "Short";
        if (height < 1.85)
            return "Normal";
        return "Tall";
    }

    if (height < 1.6)
        return "Short";
    if (height < 1.75)
        return "Normal";
    return "Tall";
}

