#include <iostream>
#include <string>
#include <cstring>

using namespace std;


// examples
int* pi;
// указатель на указатель на сhar
char** ppc;
// массив из 15 указателей на int
int* ap[15];
// указатель на функцию с аргументом char* и возвратом int
int(*fp) (char*);
// функция с аргументом char* и возвратом указатель на int
int* f(char* );

const char* p = "Hera1";
const char* q = "Hera";

void g1(){
    if(p==q) cout << "one address" << "p -> " << &p << " q -> " << &q << endl;
}

const char* error_message(int i) {
    //
    return "range error";
}



char symb = 'a';
char* p_symb = &symb;

int array[10];
int& l_array = *array;

int i = 111;
int& r = i;
int* ptr_int_i = &i;

const int j = 2;

const char* str_array[10] = {"test", "test1"};
const char* p_str_array = *str_array;

string str1_array[10];
string *p_str1_array = str1_array;

// константый указатель на целое
int* const p_int = &i;

// указатель на целую константу
const int* p1_int = &i;
int const* p2_int = &i;

// константный указатель на константу
const int* const p_int_j = &j;

// TODO: ВЫравнивание, указатель на массив char


typedef unsigned char  uchar;
typedef const unsigned char c_uchar;
typedef int* ptr_int;
typedef char** pp_char;

int* ptr_array[10];

void exchange_value(int* a, int* b);
void exchange_value(int& a, int& b);




int main() {

    ptr_array[0] = ptr_int_i;


    int a = 10;
    int b = 26;

    int* ptr_a = &a;
    int* ptr_b = &b;

    int& l_a = a;
    int& l_b = b;

    cout<< "a = " << a << " b = "<< b<<endl;

    exchange_value(ptr_a, ptr_b);

    cout<< "a = " << a << " b = "<< b<<endl;

    exchange_value(l_a, l_b);

    cout<< "a = " << a << " b = "<< b<<endl;

    char str[] = "a short string";
    string str1 = "a short string";

    cout<<"str -- "<< strlen(str)<<endl;
    cout<<"str1 -- "<< str1.size()<<endl;

    cout<< (int)str[14]<<endl;

    std::cout << "Hello, World!" << *ptr_array[0]<< std::endl;

    g1();

    return 0;
}

void exchange_value(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void exchange_value(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}
