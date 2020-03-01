#include "Print.hpp"

void Print::allLogs(Logger* logger)
{
    auto records = logger->getRecords();

    if(logger->existsError())
    {
        std::cout << "Errors: " << logger->countError() << std::endl;
    }

    int step = 1;
    for(auto record : records)
    {
        std::cout << "Step " << step << ": " << record.getContent() << std::endl;
        if(record.getType() == SUCCESS) std::cout << "Success" << std::endl;
        if(record.getType() == ERROR) std::cout << "Error" << std::endl;
        step++;
    }
}