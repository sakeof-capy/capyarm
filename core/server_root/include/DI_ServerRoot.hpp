#ifndef CAPYARM_DI_SERVER_ROOT_HPP_
#define CAPYARM_DI_SERVER_ROOT_HPP_

#include "ServerRoot.hpp"

#include <capydi/configs/creational/Singleton.hpp>
#include <tuple>

std::tuple GENERATE_UNIQUE_NAME = {
    capy::di::Singleton<capy::arm::ServerRoot>{}
};

#endif // !CAPYARM_DI_SERVER_ROOT_HPP_
