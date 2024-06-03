#ifndef UTILS_H
#define UTILS_H
#include "ParseHeaderFileContent.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;


class Utils{
public:
    Utils(){

    }
    vector<string> collectCppDirectoryContent(string dirName);
    vector<string> collectRustDirectoryContent(string dirName);
    vector<string> collectJavaDirectoryContent(string dirName);
    void collectDirectoryContent(string dirName, string sourceType);
    string collectFileContent(string fileName);
    void usage();
};
#endif