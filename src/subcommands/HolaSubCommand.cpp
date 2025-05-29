// HolaCommand.cpp
#include "HolaSubCommand.hpp"

void HolaSubCommand::execute(const std::vector<std::string>& args) {
    
    std::string name_arg = "Mundo"; // Valor por defecto

    // Si se proporciona un argumento, lo usamos como nombre
    if (!args.empty()) {
        name_arg = args[0];
    }
    std::cout << "Hola, " << name_arg << "!" << std::endl;
}
