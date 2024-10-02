#include <cmath>
#include <iostream>
#include "functions.h"
using namespace std;


double func::add(double num1p, double num2p){
    result = num1p+num2p;
    cout << "= " << result << endl;
    return result;
}


double func::substract(double num1p, double num2p){
    result = num1p-num2p;
    cout << "= " << result << endl;
    return result;
}

double func::multiply(double num1p, double num2p){
    result = num1p*num2p;
    cout << "= " << result << endl;
    return result;
}

double func::divide(double num1p, double num2p){
    result = num1p/num2p;
    cout << "= " << result << endl;
    return result;
}

double func::cosine(double num1p){
    result = cos(num1p);
    cout << "= " << result << endl;
    return result;
}

double func::sine(double num1p){
    result = cos(num1p);
    cout << "= " << result << endl;
    return result;
}

double func::tangent(double num1p){
    result = tan(num1p);
    cout << "= " << result << endl;
    return result;
}

double func::logarithm(double num1p){
    result = log(num1p);
    cout << "= " << result << endl;
    return result;
}
