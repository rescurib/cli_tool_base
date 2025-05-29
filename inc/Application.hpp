// Application.hpp
#pragma once
#include "ArgumentParser.hpp"
#include "ISubCommand.hpp"
#include <memory>
#include <map>

class Application {
public:
    Application();
    void run(int argc, char* argv[]);
private:
    std::map<std::string, std::shared_ptr<ISubCommand>> commandMap;
};
