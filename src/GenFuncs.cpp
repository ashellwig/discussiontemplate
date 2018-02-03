#include "../include/GenFuncs.h"
#include <iostream>

int GenFuncs::pause()
{
    std::cout << "Press enter to continue..." << std::endl;
    std::cin.ignore();
    return 0;
}
