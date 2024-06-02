#ifndef ERROR_H
#define ERROR_H
#include "ParseHeaderFileContent.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

enum ErrorType{
    BAD_INPUT,
    UNKNOWN
};

class Error{
public:
    Error(string error,int code, string msg)
        :errorType{error}, errorMessage{msg}, errorCode{code}{};

    Error(){}
    void notDirectory(Error error);
    string getErrorMessage(){
        return errorMessage;
    }
    int getErrorCode(){
        return errorCode;
    }
    string getErrorType(){
        return errorType;
    }

    void printError(){
        cout << "error : " << errorType << "\n";
        cout << "code : " << errorCode << "\n";
        cout << "message : " << errorMessage << "\n";
    }

private:
    string errorType;
    string errorMessage;
    int errorCode;
};
#endif