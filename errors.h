#include <cmath>
#include <iostream>
using namespace std;

class errors{
    public:

    errors() = default;
    double error_num1();
    string error_op();
    double error_num2();


    double num1;
    double num2;
    string op;
    string ssin = "sin";
    string stan = "tan";
    string scos = "cos";
    string slog = "log";
    string add = "+";
    string mins = "-";
    string multiply = "*";
    string divide = "/";

};