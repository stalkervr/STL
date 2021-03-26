#include <iostream>
#include <string>
#include <map>
#include <cctype>

//using namespace std;

typedef std::string  string;

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

int no_of_error;
double number_value;
string string_value;

double term(bool get);
double expr(bool get);
double prim(bool get);
double error(const string& s);

std::map<string, double> table;

Token_value get_token();

int main() {
//TODO: Don't work const
    table["pi"] = 3.14;
    table["e"]  = 2.718;

    while (std::cin)
    {
        get_token();
        if (curr_tok == END) break;
        if (curr_tok == PRINT) continue;
        std::cout<< expr(false) << '\n';
    }

    return no_of_error;
}

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
                return error("divide by 0!");
            default:
                return left;
        }
    }
}

double prim(bool get)
{
    if (get) get_token();
    switch (curr_tok) {
        case NUMBER: {
            double v = number_value;
            get_token();
            return v;
        }
        case NAME: {
            double& v = table[string_value];
            if (get_token() == ASSIGN) v = expr(true);
            return v;
        }
        case MINUS: {
            return -prim(true);
        }
        case LP: {
            double e = expr(true);
            if (curr_tok != RP) return error("')' expected");
            get_token();
            return e;
        }
        default:
            return error("primary expected");
    }
}

double error(const string& s)
{
    no_of_error++;
    std::cerr<<"error: "<< s << std::endl;
    return 1;
}

Token_value get_token()
{
    char ch = 0;
    std::cin >> ch;
    switch (ch) {
        case 0: return curr_tok = END;
        case ';':
        case '*':
        case '/':
        case '+':
        case '-':
        case '(':
        case ')':
        case '=':
            return curr_tok = Token_value(ch);
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '.':
            std::cin.putback(ch);
            std::cin >> number_value;
            return curr_tok = NUMBER;
        default:
            if (isalpha(ch))
            {
                std::cin.putback(ch);
                std::cin >> string_value;
                return curr_tok = NAME;
            }
            error("bad token");
            return curr_tok = PRINT;

    }
}

