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
    vector<string> collectDirectoryContent(string dirName, string sourceType);
    string collectFileContent(string fileName);
    void usage();
};
#endif