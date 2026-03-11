cmake_minimum_required(VERSION 3.20)
project(trivia_app C)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_C_STANDARD 11)
# Compiler warnings and flags
if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
    add_compile_options(
        -Wall
        -Wextra
        -Werror
        -Wpedantic
        -Wformat=2
        -Wformat-security
        -Wnull-dereference
        -Wstack-protector
        -Wstrict-overflow=3
        -Warray-bounds=2
        -Wconversion
        -Wshadow
    )
endif()

find_package(PkgConfig REQUIRED)
pkg_check_modules(RAYLIB REQUIRED raylib)

find_package(cJSON CONFIG REQUIRED)
find_package(mongoc CONFIG REQUIRED)

add_executable(trivia_app src/main.c src/window.c src/textBox.c)
target_include_directories(trivia_app PRIVATE include)

target_link_libraries(trivia_app PRIVATE
    ${RAYLIB_LIBRARIES}
    cjson
    mongoc::mongoc
)

target_include_directories(trivia_app PRIVATE ${RAYLIB_INCLUDE_DIRS})
target_link_directories(trivia_app PRIVATE ${RAYLIB_LIBRARY_DIRS})

# Tests (add later)
# add_subdirectory(tests)
