#include <string>
#include <vector>
#include <iostream>

#include "../catch/catch.hpp"
#include "../readFromFile.hpp"
#include "../finddist.h"

using std::string;
using std::vector;

TEST_CASE("Verify that finddist Class finddis function works") {
	std::vector<double> solutions{3039.15, 5574.84045};

	REQUIRE(((finddis(33.63100052,-85.15200043,40.06639862,-118.5650024) <= solutions[0] + solutions[0] * 0.1)
	&& (finddis(33.63100052,-85.15200043,40.06639862,-118.5650024) >= solutions[0] - solutions[0] * 0.1)));
	REQUIRE(((finddis(51.5007,0.1246,40.6892,74.0445) <= solutions[1] + solutions[1] * 0.1)
	&& (finddis(51.5007,0.1246,40.6892,74.0445) >= solutions[1] - solutions[1] * 0.1)));

}