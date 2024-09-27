add_executable(main main.cpp
        Vector2D.cpp
        ../include/Vector2D.hpp
        Enrolments.cpp
        ../include/Enrolments.hpp)
add_executable(allocateArray allocateArray.cpp)
add_executable(badSwap badSwap.cpp)
add_executable(copySemantics copySemantics.cpp)
add_executable(danglingRef danglingRef.cpp)
add_executable(destructorOrder destructorOrder.cpp)
add_executable(IntList IntList.cpp)
add_executable(malloc malloc.cpp)
add_executable(passBy passBy.cpp)
add_executable(pointers pointers.cpp)
add_executable(references references.cpp)
add_executable(uniquePtr uniquePtr.cpp)
