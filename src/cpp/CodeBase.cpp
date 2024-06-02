#include <iostream>
#include <thread>
#include <stdio.h>
#include "CodeBase.h"

CodeBase::CodeBase()
{
}

void CodeBase::hello()
{
    std::cout << "Hello, world" << std::endl;
    std::cout << "Concc = " << std::thread::hardware_concurrency() << std::endl;
    
}
