# CMakeLists.txt for Demo app.

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt6 CONFIG REQUIRED COMPONENTS Widgets OpenGLWidgets)

add_executable(Demo WIN32
	Source/Main.cpp
	Source/MainWindow.cpp
	Source/MainWindow.h
	Source/GLCanvas.cpp
	Source/GLCanvas.h
)

target_link_libraries(Demo PRIVATE
	Qt6::Widgets
	Qt6::OpenGLWidgets
	GAMath
)