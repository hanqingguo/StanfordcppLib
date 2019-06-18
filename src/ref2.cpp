//
// Created by hanqing on 6/17/19.
//
#include <cmath>
#include <iostream>
using namespace std;
void quadratic(int a, int b, int c, double& root1, double& root2){
    root1 = (-b + sqrt(b*b-4*a*c))/(2*a);
    root2 = (-b - sqrt(b*b-4*a*c))/(2*a);
}
int main(){
    double r1,r2;
    quadratic(1,-3,-4, r1, r2);
    cout << "The roots are " << r1 << " and " <<r2<<endl;
    return 0;
}