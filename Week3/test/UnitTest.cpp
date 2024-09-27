// https://github.com/catchorg/Catch2/blob/v2.x/docs/assertions.md
#include <catch.hpp>
#include <iostream>
#include <vector>

#include "Enrolments.hpp"
#include "Vector2D.hpp"

TEST_CASE("Basic test") {
	SECTION("Basic test") {
		CHECK(1 == 1);
	}
}
