#include <iostream>
#include <set>
#include <map>
#include <filesystem>
#include <cstring>
#include "CodeBase.h"
#include "Utils.h"
#include "Error.h"

using namespace std;
namespace fs = std::filesystem;

int main(int argc, char **argv){

    Utils utils;
    Error error("BAD_INPUT", 21, "argument must be directory");

    if (argc < 3){
        utils.usage();
        return -1;
    }
  
    set<string> options = {"-c", "-r", "-j", "-f"};
    if (!(options.find(argv[1]) != options.end())){
        utils.usage();
        return -2;
    }

    if (!fs::is_directory(argv[2]))
    {
        Error error("BAD_INPUT", 21, "argument must be directory");
        error.printError();   
    }

    if (strcmp(argv[1], "-f") == 0)
    {
        if (argc != 4){
            utils.usage();
            return -1;
        }
        utils.findContent(argv[2], argv[3]);
    }
    utils.collectDirectoryContent(argv[1], argv[2]);
    return 0;
}