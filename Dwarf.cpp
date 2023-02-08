#include "Dwarf.h"
#include "Utility.h"

//Dwarf::Dwarf

const std::string& Dwarf::getName()
{
    return name;
}

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}
