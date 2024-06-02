#include <iostream>
#include <set>
#include "CodeBase.h"
#include "Utils.h"
#include "Error.h"

using namespace std;

int main(int argc, char **argv){
    Utils utils;
    Error error("BAD_INPUT", 21, "argument must be directory");
    set<string> options = {"-c", "-r", "-j"};
    if (argc != 3){
        utils.usage();
        return -1;
    }

    
    if (!(options.find(argv[1]) != options.end())){
        utils.usage();
        return -1;
    }

    utils.collectDirectoryContent(argv[1], argv[2]);
    return 0;
}