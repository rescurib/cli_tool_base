# CLI Base en C++ con CMake

Plantilla básica para crear aplicaciones de línea de comandos en C++ utilizando CMake como generador de sistema de construcción.

## Características

- Estructura de proyecto limpia y modular
- Compatible con CMake 3.10+
- Manejo de argumentos y banderas
- Fácilmente extensible

## Requisitos

- CMake >= 3.10
- C++17 o superior
- Un compilador como `g++`, `clang++` o `MSVC`

## Instalación y construción

```bash
git clone https://github.com/rescurib/cli_tool_base.git
cd <cli-app-dir>
```
En Windows:
```bash
cmake .. -G "MinGW Makefiles" 
cmake --build .
```
