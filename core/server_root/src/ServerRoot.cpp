#include "ServerRoot.hpp"
#include <iostream>

namespace capy::arm
{

ServerRoot ServerRoot::create()
{
    return {};
}

int ServerRoot::start()
{
    std::cout << "Server Started!\n";
    std::cout.flush();

    return EXIT_SUCCESS;
}

}
