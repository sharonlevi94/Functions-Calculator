# TODO: Add tests and install targets if needed.
cmake_minimum_required (VERSION 3.15)

project ("ex1_sharon_levi_bar_ifrah")

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_EXTENSIONS OFF)
if (MSVC)
    add_compile_options (/permissive-)
endif ()

add_executable(ex1_sharon_levi_bar_ifrah)

add_subdirectory (include)
add_subdirectory (src)