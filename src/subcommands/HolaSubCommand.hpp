// HolaSubCommand.hpp
#pragma once
#include "ISubCommand.hpp"
#include <iostream>

class HolaSubCommand : public ISubCommand {
public:
    void execute(const std::vector<std::string>& args) override;
};