/**
 * @file ISubCommand.hpp
 * @brief Interfaz base para subcomandos ejecutables en la herramienta CLI.
 *
 * Define la interfaz abstracta `ISubCommand` que debe ser implementada por todos los subcomandos.
 * Cada comando debe definir el método `execute`, que recibe una lista de argumentos.
 *
 * Ejemplo de uso:
 *     class MySubCommand : public ICommand 
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

class ISubCommand {
public:
    virtual ~ISubCommand() = default;
    /**
     * @brief Ejecuta el comando con los argumentos proporcionados.
     * @param args Vector de argumentos de tipo string.
     */
    virtual void execute(const std::vector<std::string>& args) = 0;
};
