#include "Input.hpp"

/**
 * Processing requests from the user
 **/
void Input::processingRequest(int argv, char** args)
{
    if(DEBUG)
    {
        Debug::printMessage("In method processingRequest");
    }

    Make make;

    //Use make
    if(argv == 2 && args[1] == "make")
    {
        make.parseConfig();
    }
    else if(argv == 3 && args[1] == "make")
    {
        make.setPathToConfig(args[2]);
        make.parseConfig();
    }
    else if(argv > 1)
    {
        TranspilerList transpilerList;
        for(int i = 1; i < argv; i++) transpilerList.add(args[i]);
        make.loadTranspilerList(transpilerList);
        make.parseConfig();
    }

    
    if(DEBUG)
    {
        Debug::printMessage("End method processingRequest");
    }

    //(Transpiler(make.getTranspilerList(), make.getVersionPHP(), make.getOutput()));
}