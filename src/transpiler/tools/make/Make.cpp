#include "Make.hpp"

Make::Make()
{
    if(DEBUG)
    {
        Debug::printMessage("In constructor of Make");
    }
}

Make::~Make()
{

}

void Make::parseConfig()
{
    if(!this->getConfig()->isOpen())
    {
        std::string errorMessage = "Config file with name " + this->pathToMake + " not found";

        Logger::getInstance()->addRecord(Record(errorMessage, ERROR));
        return;
    }

    //this->makeParser.parse(this->config)
    //this->loadTranspilerList(this->makeParser.getTranspilerList());
}

File* Make::getConfig()
{
    return &this->config;
}

void Make::setPathToConfig(std::string path)
{
    this->pathToMake = path;
    this->config.open(this->pathToMake);
}

void Make::loadTranspilerList(TranspilerList list)
{
    this->list = list;
}