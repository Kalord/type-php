#include "Input.hpp"

/**
 * Processing requests from the user
 **/
void Input::processingRequest(int argv, char** args)
{
    TranspilerList transpilerList;
    Make make;

    //Use make
    if(argv == 2 && args[1] == "make")
    {
        transpilerList = make.getTranspilerList();
    }
    else if(argv == 3 && args[1] == "make")
    {
        //make.setPathToConfig(args[2]);
        transpilerList = make.getTranspilerList();
    }
    else if(argv > 1)
    {
        for(int i = 1; i < argv; i++) transpilerList.add(args[i]);
        //make.loadTranspilerList(transpilerList);
    }

    //(Transpiler(make.getTranspilerList(), make.getVersionPHP(), make.getOutput()));
}