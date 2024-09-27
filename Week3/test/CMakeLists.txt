add_executable(test TestMain.cpp UnitTest.cpp
        ../src/Enrolments.cpp
        ../include/Enrolments.hpp
        ../src/Vector2D.cpp
        ../include/Vector2D.hpp)

target_include_directories(test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/catch2)
