// https://github.com/catchorg/Catch2/blob/v2.x/docs/assertions.md
#include <iostream>
#include <vector>
#include "catch2/catch.hpp"
#include "../Student.h"


TEST_CASE("Consructors") {
	SECTION("main constructor") {
		Student s{5555, "AKHIL"};
		CHECK(s.getZid() == 5555);
		CHECK(s.getName() == "AKHIL");
	}
}

TEST_CASE("Calculate WAM") {
	SECTION("empty grade") {
		Student s{5555, "AKHIL"};
		double wam = s.calculateWAM();
		CHECK(wam == 100.0);
	}
	SECTION("3 grades") {
		Student s{5555, "AKHIL"};
		s.addGrade(85, "MTRN2500", "coding in cpp");
		s.addGrade(85, "MTRN2500", "coding in cpp");
		s.addGrade(85, "MTRN2500", "coding in cpp");
		double wam = s.calculateWAM();
		CHECK(wam == 85.0);
	}
}