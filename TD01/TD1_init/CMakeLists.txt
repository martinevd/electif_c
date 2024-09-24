cmake_minimum_required(VERSION 3.28)
project(TD1)

# Define C++ version to be used in the project
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# This is a configuration option for CMake, 
option(CLANG_TIDY_BUILD "Run clang tidy during compilation. The project should be warning free on main branch." OFF)
# consist of:
#   - an option name (boolean that can later be used in if statement (see below)
#   - a string describing the option
#   - the default value for the option

if (CLANG_TIDY_BUILD)
# activate clang tidy build based on the option
# warning : clang-tidy can drastically increase build time.
set(CMAKE_CXX_CLANG_TIDY
    clang-tidy-17; # replace by version of clang tidy used on your system
    -checks=*,-llvmlibc*,-fuchsia-*,fuchsia-statically-constructed-objects,-llvm-header-guard,-misc-include-cleaner,-altera-unroll-loops; # list of check to be activated, here a large part of the checks are activated which allow to see the kind of check that can be performed
    -p=${CMAKE_BINARY_DIR}
)
endif()

add_executable(TD1
        main.cpp)



