add_executable(test TestMain.cpp UnitTest.cpp
)

target_include_directories(test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/catch2)
