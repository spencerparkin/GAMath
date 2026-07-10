# CMakeLists.txt for GATest

add_executable(GATest
	Source/Main.cpp
	Source/Main.h
)

target_link_libraries(GATest PRIVATE
	GAMath
)