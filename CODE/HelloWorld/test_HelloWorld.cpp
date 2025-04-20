#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>

TEST_CASE("basic debug output") {
    std::cerr << "[DEBUG] Minimal test case executed!\n";
    CHECK(true);
}
