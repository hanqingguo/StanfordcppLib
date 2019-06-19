//
// Created by hanqing on 6/18/19.
//
#include <fstream>
#include <iostream>


using namespace std;

int main(){
    ifstream input;
    input.open("src/name1.txt"); //default work directory is ~/CLionProjects/app/
    //If work in terminal, use relative path is ok, eg: input.open("name1.txt")
    string line;
    while(getline(input, line)){
        cout << line << endl;
    }
    input.close();
    return 0;
}
