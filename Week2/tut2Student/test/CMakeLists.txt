add_executable(test TestMain.cpp UnitTest.cpp ../Student.cpp ../Student.h
)

target_include_directories(test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/catch2)
