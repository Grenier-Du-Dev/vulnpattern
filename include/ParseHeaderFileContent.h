#ifndef HEADERFILECONTENT_H
#define HEADERFILECONTENT_H
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class HeaderFileContent{
public:
    HeaderFileContent();
    HeaderFileContent(string fileName, vector<string> content, int size)
        :f_name{fileName}, f_content{content},f_size{size}
        {

        };


    string getFileName();
    int getFileSize();
    vector<string> getFileContent();


    void setFileName(string name){
        this->f_name = name;
    }

    void setFileSize(int s){
        this->f_size = s;
    }

    void setFileContent(vector<string> content){
        this->f_content = content;
    }

    void collectFileContent();
private:
    string f_name;
    vector<string> f_content;
    int f_size;
};
#endif