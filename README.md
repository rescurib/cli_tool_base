# CLI Base en C++ con CMake

Plantilla básica para crear aplicaciones de línea de comandos en C++ utilizando CMake como sistema de construcción.

## Características

- Estructura de proyecto limpia y modular
- Compatible con CMake 3.10+
- Manejo de argumentos (ejemplo con `getopt` o `cxxopts`)
- Preparado para pruebas unitarias
- Fácilmente extensible

## Requisitos

- CMake >= 3.10
- C++17 o superior
- Un compilador como `g++`, `clang++` o `MSVC`

## Instalación

```bash
git clone https://github.com/usuario/cli-cpp-cmake-template.git
cd cli-cpp-cmake-template
mkdir build && cd build
cmake ..
make
