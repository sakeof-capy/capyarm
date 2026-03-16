#include "ServerRoot.hpp"

#include <httplib.h>
#include <iostream>
#include <print>

namespace capy::arm
{

ServerRoot ServerRoot::create()
{
    return {};
}

int ServerRoot::start()
{
    const int port = 8080;
    httplib::Server server;

    server.Get("/", [](const httplib::Request&, httplib::Response& res) {
        res.set_content("Hello world", "text/plain");
    });

    std::println("Server Started on port {}!\n", port);
    std::fflush(stdout);

    server.listen("0.0.0.0", port);

    return EXIT_SUCCESS;
}

}
