#include "Input.hpp"

/**
 * Processing requests from the user
 **/
void Input::processingRequest(int argv, char** args)
{
    if(DEBUG)
    {
        Debug::printMessage("In method processingRequest");    }

    Make make;

    //Use make
    if(argv == 2 && std::string(args[1]) == "make")
    {
        if(DEBUG)
        {
            Debug::printMessage("In standart make");
        }

        make.setPathToConfig("make.tphp");
        make.parseConfig();
    }
    else if(argv == 3 && std::string(args[1]) == "make")
    {
        if(DEBUG)
        {
            Debug::printMessage("In make");
        }
        make.setPathToConfig(std::string(args[2]));
        make.parseConfig();
    }
    else if(argv > 1)
    {
        if(DEBUG)
        {
            Debug::printMessage("In TranspilerList");
        }
        TranspilerList transpilerList;
        for(int i = 1; i < argv; i++) transpilerList.add(std::string(args[i]));
        make.loadTranspilerList(transpilerList);
    }

    
    if(DEBUG)
    {
        Debug::printMessage("End method processingRequest");
    }

    if(!Logger::getInstance()->existsError())
        //(Transpiler(make.getTranspilerList(), make.getVersionPHP(), make.getOutput()));
}