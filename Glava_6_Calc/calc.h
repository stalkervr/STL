//
// Created by stalk on 23.03.2021.
//

#ifndef GLAVA_6_CALC_CALC_H
#define GLAVA_6_CALC_CALC_H
#include <string>
enum Token_value
{
    NAME,
    NUMBER,
    END,
    PLUS='+',
    MINUS='-',
    MUL='*',
    DIV='/',
    PRINT=';',
    ASSIGN='=',
    LP='(',
    RP=')'
};

Token_value curr_tok = PRINT;
//double number_value;
//std::string string_value;
//int no_of_error;

double term(bool get);
double expr(bool get);
double prim(bool get);

//double error(const string& s);

#endif //GLAVA_6_CALC_CALC_H
