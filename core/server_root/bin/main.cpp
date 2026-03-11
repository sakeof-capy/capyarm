#include "di_generated/DI.hpp"
#include "ServerRoot.hpp"

#include <capydi/Container.hpp>
#include <cstddef>

using capy::di::Resolution;
using capy::arm::ServerRoot;

int main()
{
    auto container = capy::di::build_up_container();
    
    Resolution<ServerRoot, capy::di::Error> auto 
        resolution = container.resolve<ServerRoot>();

    ServerRoot& server = resolution.value();
    return server.start();
}
