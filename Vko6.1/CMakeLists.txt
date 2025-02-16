cmake_minimum_required(VERSION 3.16)

project(Vko6_uudestaan LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Vko6_uudestaan main.cpp
    student.h student.cpp)

include(GNUInstallDirs)
install(TARGETS Vko6_uudestaan
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
