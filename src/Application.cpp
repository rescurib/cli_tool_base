// Application.cpp
#include "Application.hpp"
#include "ArgumentParser.hpp"
#include "subcommands/HolaSubCommand.hpp"

Application::Application() {
    // Inicialización de comandos disponbles
    // Aquí se pueden agregar más comandos según sea necesario
    commandMap["saludo"] = std::make_shared<HolaSubCommand>();
}

void Application::run(int argc, char* argv[]) {
    ArgumentParser parser(argc, argv);
    auto cmd = parser.getCommand();
    auto args = parser.getArguments();

    if (commandMap.count(cmd)) {
        commandMap[cmd]->execute(args);
    } else {
        std::cerr << "Opción no reconocida: " << cmd << std::endl;
    }
}
