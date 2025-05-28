/**
 * @file ICommand.hpp
 * @brief Interfaz base para comandos ejecutables en la herramienta CLI.
 *
 * Define la interfaz abstracta `ICommand` que debe ser implementada por todos los comandos.
 * Cada comando debe definir el método `execute`, que recibe una lista de argumentos.
 *
 * Ejemplo de uso:
 *     class MyCommand : public ICommand 
 *     {
 *         void execute(const std::vector<std::string>& args) override;
 *     };
 *
 * Métodos:
 *     - virtual void execute(const std::vector<std::string>& args) = 0;
 */

#pragma once
#include <vector>
#include <string>

class ICommand {
public:
    virtual ~ICommand() = default;
    /**
     * @brief Ejecuta el comando con los argumentos proporcionados.
     * @param args Vector de argumentos de tipo string.
     */
    virtual void execute(const std::vector<std::string>& args) = 0;
};
