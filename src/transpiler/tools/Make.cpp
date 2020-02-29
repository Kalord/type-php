#include "Make.hpp"

Make::Make(std::string pathToMake) : 
pathToMake(pathToMake), list(TranspilerList()), version(Version())
{
    this->parseConfig();
}

Make::~Make()
{

}

void Make::parseConfig()
{
    
}