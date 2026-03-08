cmake_minimum_required(VERSION 3.20)
project(trivia_app C)

set(CMAKE_C_STANDARD 11)

find_package(raylib CONFIG REQUIRED)
find_package(cJSON CONFIG REQUIRED)
find_package(mongoc CONFIG REQUIRED)

add_executable(trivia_app src/main.c)

target_link_libraries(trivia_app PRIVATE
    raylib
    cjson
    mongoc::mongoc
)

# Tests (add later)
# add_subdirectory(tests)
