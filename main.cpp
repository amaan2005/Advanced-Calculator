#include <cmath>
#include <iostream>
#include <cstring>
#include "functions.h"
#include "errors.h"
using namespace std;
int option;
double num1;
double num2;
string ssin = "sin";
string stan = "tan";
string scos = "cos";
string slog = "log";
string add = "+";
string mins = "-";
string multiply = "*";
string divide = "/";
string op;
func function1;
errors error1;
double result;
int ending();

void decide(double num1_param, string op_param){
    if ((op_param.compare(scos)) == 0){
    result=function1.cosine(num1_param);
   }
   else if ((op_param.compare(ssin)) == 0){
    result=function1.sine(num1_param);
   }
   else if ((op_param.compare(stan)) == 0){
    result=function1.tangent(num1_param);
   }
   else if ((op_param.compare(slog)) == 0){
    result=function1.logarithm(num1_param);
   }else{
    num2 = error1.error_num2();
   }if ((op_param.compare(add)) == 0){
    result=function1.add(num1_param, num2);
   }
   else if ((op_param.compare(mins)) == 0){
    result=function1.substract(num1_param, num2);
   }
   else if ((op_param.compare(multiply)) == 0){
    result=function1.multiply(num1_param, num2);
   }
   else if ((op_param.compare(divide)) == 0){
    result=function1.divide(num1_param, num2);
   }
   ending();
   
}

void restart(){
    cout << result << endl;
    op = error1.error_op();
    decide(result, op);
}


int main(){
   cout << "This calculator supports addition, substraction, multiplication, addition, cos, sin, tan and log. " << endl;
   cout << "Note: for trig, input like this: '45 tan'. Answer is returned in rad. " << endl;
   cout << "Enter numbers and operators one at a time! Ex: 1(enter), +(enter), 1(enter) " << endl;
   num1 = error1.error_num1();
   op = error1.error_op();
   decide(num1, op);
}

int ending(){
   cout << "Input 0 to use result or 1 to restart or 2 to end" << endl;
   cin >> option;
   while (!(option==0 || option==1 || option==2)){
        cout << "Invalid input. Try again." << endl;
        cin >> option;
   }if (option==0){
    restart();
   }else if (option==1){
    main();
   }else{
    return 0;
   }
}
