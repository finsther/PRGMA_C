cmake_minimum_required(VERSION 3.0.0)
project(prgma_c VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(prgma_c main.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(CPack)
