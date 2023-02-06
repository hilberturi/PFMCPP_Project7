#pragma once

#include "Character.h"

struct Dwarf : Character
{
    Dwarf (std::string name_, int hp, int armor_)
        : Character(hp, armor_, 4 ), name (name_) {}

    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};
