#pragma once

#include "Character.h"
#include "Utility.h"

struct DragonSlayer : Character
{
    DragonSlayer (std::string name_, int hp, int armor_)
        : Character (hp, armor_, 4), 
          name (name_),
          helpfulItems(makeHelpfulItems(computeRandomItemCount())),
          defensiveItems(makeDefensiveItems(computeRandomItemCount())) {}

    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;

private:
    const std::string name;
};
