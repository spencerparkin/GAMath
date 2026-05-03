# CMakeLists.txt file for GAMath C++ library.

cmake_minimum_required(VERSION 3.26)

project(GAMath)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Bin)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(E2GA_SOURCES
	Source/E2GA/Multivector.cpp
	Source/E2GA/Multivector.h
	Source/E2GA/PsuedoScalar.cpp
	Source/E2GA/PsuedoScalar.h
	Source/E2GA/Rotor.cpp
	Source/E2GA/Rotor.h
	Source/E2GA/Scalar.cpp
	Source/E2GA/Scalar.h
	Source/E2GA/Vector.cpp
	Source/E2GA/Vector.h
)

set(E3GA_SOURCES
	Source/E3GA/Bivector.cpp
	Source/E3GA/Bivector.h
	Source/E3GA/Multivector.cpp
	Source/E3GA/Multivector.h
	Source/E3GA/PsuedoScalar.cpp
	Source/E3GA/PsuedoScalar.h
	Source/E3GA/Rotor.cpp
	Source/E3GA/Rotor.h
	Source/E3GA/Scalar.cpp
	Source/E3GA/Scalar.h
	Source/E3GA/Vector.cpp
	Source/E3GA/Vector.h
)

set(C2GA_SOURCES
	Source/C2GA/Bivector.cpp
	Source/C2GA/Bivector.h
	Source/C2GA/Multivector.cpp
	Source/C2GA/Multivector.h
	Source/C2GA/PsuedoScalar.cpp
	Source/C2GA/PsuedoScalar.h
	Source/C2GA/Rotor.cpp
	Source/C2GA/Rotor.h
	Source/C2GA/Scalar.cpp
	Source/C2GA/Scalar.h
	Source/C2GA/Trivector.cpp
	Source/C2GA/Trivector.h
	Source/C2GA/Vector.cpp
	Source/C2GA/Vector.h
)

set(C3GA_SOURCES
	Source/C3GA/Bivector.cpp
	Source/C3GA/Bivector.h
	Source/C3GA/Multivector.cpp
	Source/C3GA/Multivector.h
	Source/C3GA/PsuedoScalar.cpp
	Source/C3GA/PsuedoScalar.h
	Source/C3GA/Quadvector.cpp
	Source/C3GA/Quadvector.h
	Source/C3GA/Rotor.cpp
	Source/C3GA/Rotor.h
	Source/C3GA/Scalar.cpp
	Source/C3GA/Scalar.h
	Source/C3GA/Trivector.cpp
	Source/C3GA/Trivector.h
	Source/C3GA/Vector.cpp
	Source/C3GA/Vector.h
	Source/C3GA/Geometry/Point.cpp
	Source/C3GA/Geometry/Point.h
	Source/C3GA/Geometry/Sphere.cpp
	Source/C3GA/Geometry/Sphere.h
	Source/C3GA/Geometry/Circle.cpp
	Source/C3GA/Geometry/Circle.h
	Source/C3GA/Geometry/PointPair.cpp
	Source/C3GA/Geometry/PointPair.h
	Source/C3GA/Geometry/TangentPoint.cpp
	Source/C3GA/Geometry/TangentPoint.h
	Source/C3GA/Geometry/Line.cpp
	Source/C3GA/Geometry/Line.h
	Source/C3GA/Geometry/Plane.cpp
	Source/C3GA/Geometry/Plane.h
)

set(GAMATH_SOURCES
	${E2GA_SOURCES}
	${E3GA_SOURCES}
	${C2GA_SOURCES}
	${C3GA_SOURCES}
)

add_library(GAMath STATIC ${GAMATH_SOURCES})

target_link_libraries(GAMath PUBLIC
	HappyMath
)

target_include_directories(GAMath PUBLIC Source)

add_subdirectory(Demo)
add_subdirectory(ThirdParty/HappyMath)