cmake_minimum_required(VERSION 3.16)

project(functions LANGUAGES C)

add_executable(functions main.c)

include(GNUInstallDirs)
install(TARGETS functions
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
