//
// Created by hanqing on 6/18/19.
// Example to use filelib.h sponsored by Stanford
//
#include "io/filelib.h"
#include <cstring>

using namespace std;
int main(){
    createDirectory("hanqingTest"); //default work directory is ~/CLionProjects/app/
    string cur = getCurrentDirectory();
    cout << cur << endl;
    bool dirExist = isDirectory("hanqingTest");
    string exist = boolToString(dirExist);
    cout << exist <<endl;
    string lines;
    readEntireFile("src/name1.txt",lines);
    cout << lines <<endl;
    return 0;
}
