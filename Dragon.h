#pragma once

#include "Character.h"

struct Dragon : Character
{
    Dragon (std::string name_, int hp, int armor_)
        : Character (hp, armor_, 80, 0, 0), name (name_) {}

    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;

private:
    const std::string name;
};

