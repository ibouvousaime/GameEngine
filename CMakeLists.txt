cmake_minimum_required(VERSION 2.6)
project(GameEngine)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")
find_package(glfw3 3.2 REQUIRED)
find_package(GLEW REQUIRED)
find_package(GLUT REQUIRED)
find_package(OpenGL REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS}   ${GLUT_INCLUDE_DIRS} )

add_definitions(${GLUT_DEFINITIONS})
if (GLEW_FOUND)
  include_directories(${GLEW_INCLUDE_DIRS})
  link_libraries(${GLEW_LIBRARIES})
endif()
link_directories(${GLUT_LIBRARY_DIRS})
include_directories(include)

add_executable(GameEngine src/main.cpp src/core/window.hpp src/core/mathutils.hpp src/core/meshutils.hpp )

target_link_libraries(GameEngine glfw ${OPENGL_glu_LIBRARY} ${GLFW_LIBRARIES} ${OPENGL_LIBRARY})

install(TARGETS GameEngine RUNTIME DESTINATION bin)

