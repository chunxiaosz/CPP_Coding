#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <string>
#include <filesystem>

TEST_CASE("ostringstream produces strings with str") {
  std::filesystem::path empty_path;
  std::filesystem::path shadow_path{ "/etc/shadow" };

  REQUIRE(empty_path.empty());
  REQUIRE(shadow_path == std::string{ "/etc/shadow" });
}
