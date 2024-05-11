#include "Precomp.h"

std::string tabs(int tabSize)
{
    std::string tabString;
    for (int i = 0; i < tabSize; ++i) tabString += "    ";
    return tabString;
}

int __DESCRIPTION_LENGTH = 60;