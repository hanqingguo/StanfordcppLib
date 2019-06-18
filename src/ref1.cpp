//
// Created by hanqing on 6/17/19.
//
#include "io/simpio.h"
using namespace std;

void datingRange(int age, int& min, int& max){
    min = age /2 + 7;
    max = (age - 7) * 2;
}
int main(){
    int young;
    int old;
    datingRange(48, young, old);
    cout << "A 48-year-old could date someone from "<< young << " to "<< old <<endl;
    return 0;
}


