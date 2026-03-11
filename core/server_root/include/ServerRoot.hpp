#ifndef CAPYARM_SERVER_ROOT_HPP_
#define CAPYARM_SERVER_ROOT_HPP_

namespace capy::arm
{

class ServerRoot
{
public:
    static ServerRoot create();

public:
    int start();
};

}

#endif // !CAPYARM_SERVER_ROOT_HPP_
