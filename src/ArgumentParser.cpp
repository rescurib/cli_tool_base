// ArgumentParser.cpp
#include "ArgumentParser.hpp"

ArgumentParser::ArgumentParser(int argc, char* argv[]) {
    if (argc > 1) {
        command = argv[1];
        for (int i = 2; i < argc; ++i) {
            arguments.emplace_back(argv[i]);
        }
    }
}

std::string ArgumentParser::getCommand() const {
    return command;
}

std::vector<std::string> ArgumentParser::getArguments() const {
    return arguments;
}
