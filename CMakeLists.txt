
project(lr1kpo)

set(CMAKE_CXX_FLAGS "-Wall -std=c++17")


set (FIGURES
        Shape.cpp
        Text.cpp
        RightTriangle.cpp
        RightTriangleRoundedCorners.cpp
        TriangleText.cpp
        )
add_executable (main ${FIGURES} Main.cpp)