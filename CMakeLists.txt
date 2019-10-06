
project(lr1kpo)

set(CMAKE_CXX_FLAGS "-Wall -std=c++17")


set (FIGURES
        Shape.cpp
        Text.cpp
        RightTriangle.cpp
        RightTriangleRoundedCorners.cpp
        TriangleText.cpp
        )
add_executable (soloFigures ${FIGURES} Main.cpp)
add_executable (containers ${FIGURES} containers.cpp)
add_executable (myContainer ${FIGURES} myContainer.cpp)