#include "Utils.h"
#include "Error.h"
#include <string>
#include <vector>
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;
using namespace std;

string Utils::collectFileContent(string fileName){
    cout << "current file path : " << fs::current_path() << '\n';
    return fileName;
}

vector<string> Utils::collectDirectoryContent(string sourceType, string dirName){
    if (!fs::is_directory(dirName))
    {
        Error error("BAD_INPUT", 21, "argument must be directory");
        error.printError();   
    }
    vector<string> dirs;
    for(auto p: fs::recursive_directory_iterator(dirName)){
        cout << p << "\n";
        //dirs.push_back(p);
    }

    return dirs;
}


void Utils::usage(){
    cout << "usage vulnpattern [OPTION] directory" << "\n";
    cout << "Options available :" << "\n";
    cout << "\t\t-c : for c and c++ source code\n\t\t-r : for rust source code\n\t\t-j : for java source code\n" << "\n";
}




