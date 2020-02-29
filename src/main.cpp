#include <iostream>
#include "io/File.hpp"
#include "logger/Logger.hpp"
#include "logger/Record.hpp"
#include "io/Input.hpp"
#include "logger/Print.hpp"

int main(int argv, char** args)
{
    Logger* logger = Logger::getInstance();
    logger->addRecord(Record("Start transpiler", SUCCESS));
    
    Input::processingRequest(argv, args);

    Print::allLogs(logger);

    return 0;
}