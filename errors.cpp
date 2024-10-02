#include <cmath>
#include <iostream>
#include "errors.h"
using namespace std;

double errors::error_num1(){
    cin >> num1;
    while (cin.fail()){
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid input. Try again. " << endl;
        cin >> num1;
    }
    return num1;
}


string errors::error_op(){
    cin >> op;
    while(!(((op.compare(add)) == 0) || ((op.compare(mins)) == 0) || ((op.compare(multiply)) == 0) || ((op.compare(divide)) == 0) || ((op.compare(ssin)) == 0) || ((op.compare(scos)) == 0) || ((op.compare(stan)) == 0)) || ((op.compare(slog)) == 0)){
        cout << "Invalid input. Try again. " << endl;
        cin >> op;
    }
    return op;
}

double errors::error_num2(){
    cin >> num2;
    while (cin.fail()){
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid input. Try again. " << endl;
        cin >> num2;
    }
    return num2;
}
