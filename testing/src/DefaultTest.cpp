#define CATCH_CONFIG_RUNTIME_STATIC_REQUIRE

#include <catch2/catch_test_macros.hpp>

TEST_CASE("default_test") 
{
    STATIC_REQUIRE(2 == 2);
}
