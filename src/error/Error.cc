#include "Error.h"
#include <string>
#include <iostream>

using namespace std;

void Error::notDirectory(Error error){
    error.printError();
    runtime_error("Failed");
}