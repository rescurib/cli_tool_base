// ArgumentParser.hpp
#pragma once
#include <string>
#include <vector>
#include <map>

class ArgumentParser {
public:
    ArgumentParser(int argc, char* argv[]);
    std::string getCommand() const;
    std::vector<std::string> getArguments() const;
private:
    std::string command;
    std::vector<std::string> arguments;
};
