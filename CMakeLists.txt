cmake_minimum_required(VERSION 3.20)
project(trivia_app C)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_C_STANDARD 11)

find_package(PkgConfig REQUIRED)
pkg_check_modules(RAYLIB REQUIRED raylib)

find_package(cJSON CONFIG REQUIRED)
find_package(mongoc CONFIG REQUIRED)

add_executable(trivia_app src/main.c)
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
