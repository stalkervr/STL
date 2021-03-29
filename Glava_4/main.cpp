//
// Created by stalk on 29.03.2021.
//

// g++ -Wall -o test test.cpp

#include <iostream>
#include <cmath>
#include <complex>
using namespace std;

enum test {
    ASM, AUTO
};

void f(test key);



char ch = 'n';
string s = "Test string";
int count = 1;
const double pi = 3.14;
extern int error_number;
const char* name = "Nia";
const char* season[] = {"spring", "summer", "fall", "winter"};

struct Date
{
    int day;
    int month;
    int year;
};

int day (Date* p);
double sqrt1 (double num);

template <class T> T abs1(T a)
{
    return a < 0 ? -a : a;
}

typedef complex <short> Point;


struct User
{
    string name;
    int age;
};

enum Beer { Carlberg, Tuborg, Thor };

namespace NS {int a_test;}

int convert (char a);

string inttohex(int a);

void simbol_code_out();


int main(int argc, char *argv[])
{

    Date first;
    first.day = 10;
    first.month = 12;
    first.year = 2000;

    Point one = 6;


    cout << sqrt1(25) << endl;
    cout << abs1(-555) << endl;
    cout << s << " "<< name << endl;
    cout << convert(ch) << endl;

    std::cout << "Hello, World! -- "<< sizeof (test)<< std::endl;

    cout << "Hello world! " << day(&first) << std::endl;

    simbol_code_out();
}




int day (Date* p)
{
    return p->day;
}

double sqrt1 (double num)
{
    return sqrt(num);
}

int convert (char a)
{
    return (int)a;
}

void f(test key){
    switch (key) {
        case ASM:
            std::cout<<"ASM key"<<std::endl;
            break;
        case AUTO:
            std::cout<<"AUTO key"<<std::endl;
            break;

    }
}

string inttohex(int a)
{
    string tmp("");
    do
    {
        int r(a%16);
        if (r>9) {r+=(int)'A'-10;}
        else  {r+=(int)'0';};
        tmp=(char)r+tmp;
        a/=16;
    } while (a);
    return tmp;
}
// Task_4
void simbol_code_out() {
    for (char i = 'a'; i <= 'z'; i++ )
    {
        cout<<i << " -> " << static_cast<int>(i) << " "<<"0x"<<inttohex(static_cast<int>(i)) << endl;
    }
    cout<<endl;
    for (char i = '0'; i <= '9'; i++ )
    {
        cout<<i << " -> " << static_cast<int>(i) << " "<<"0x"<<inttohex(static_cast<int>(i)) << endl;
    }
}
