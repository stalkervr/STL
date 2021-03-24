//
// Created by stalk on 23.03.2021.
//
#include "calc.h"

//Token_value curr_tok = PRINT;

double expr(bool get)
{
    double left = term(get);
    for ( ; ; ) {
        switch (curr_tok) {
            case PLUS:
                left += term(true);
                break;
            case MINUS:
                left -= term(true);
                break;
            default:
                return left;
        }
    }
}

double term(bool get)
{
    double left = prim(get);
    for(;;) {
        switch (curr_tok) {
            case MUL:
                left *= prim(true);
                break;
            case DIV:
                if (auto d = (double)prim(true)) {
                    left /= d;
                    break;
                }
                //return error("divide by 0!");
            default:
                return left;
        }
    }
    return 0;
}

double prim(bool get) {
    return 0;
}


