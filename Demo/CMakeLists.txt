# CMakeLists.txt for Demo app.

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt6 CONFIG REQUIRED COMPONENTS Widgets OpenGLWidgets)
find_package(OpenGL REQUIRED)

add_executable(Demo WIN32
	Source/Main.cpp
	Source/MainWindow.cpp
	Source/MainWindow.h
	Source/GLCanvas.cpp
	Source/GLCanvas.h
	Source/Drawer.cpp
	Source/Drawer.h
	Source/Object.cpp
	Source/Object.h
	Source/Constraint.cpp
	Source/Constraint.h
)

target_link_libraries(Demo PRIVATE
	Qt6::Widgets
	Qt6::OpenGLWidgets
	OpenGL::GL
	GAMath
	HappyMath
)