#pragma once

#include "../transpiler/tools/Make.hpp"

class Input
{
public:
    /**
     * Processing requests from the user
     **/
    static void processingRequest(int argv, char** args);
};