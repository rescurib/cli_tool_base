cmake_minimum_required(VERSION 3.10)

project(cli_tool_base 
        VERSION 0.0.1
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

# Busqueda de archivos fuente
file(GLOB_RECURSE SOURCES "src/*.cpp" "src/*.c" "src/*.cc")
file(GLOB_RECURSE HEADERS "inc/*.h" "inc/*.hpp")

# Cabeceras públicas
include_directories(${PROJECT_SOURCE_DIR}/inc)

message(STATUS "Archivos fuente: ${SOURCES}")
message(STATUS "Archivos header: ${HEADERS}")

add_executable(cli_tool_base ${SOURCES} ${HEADERS})

target_include_directories(cli_tool_base PRIVATE src)
