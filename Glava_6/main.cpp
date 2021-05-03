#include <iostream>
#include <cstring>
#include <vector>
#include <complex>

using namespace std;


void f1(int x, int y)
{
    int j = x = y;    // значением x=y является значение х после присваивания
    int* p = &++x;    // р указывает на х
    // int* q = &(x++);   // error х++ не есть lvalue (это не значение хранимое в х)
    int* pp = &(x>y?x:y);
}


// функции копирования массива

void copy_arr (char* str_output, const char* str_input)
{
    int len_string = strlen(str_input);
    for(int i = 0; i<len_string; i++)
    {
        str_output[i] = str_input[i];
    }
}

// можно так только сложно для восприятия
void copy_arr_2(char* str_output, const char* str_input)
{
    while (*str_output++ = *str_input++);
}

// масивы объектов можно создавать операцией new

char* save_string (const char* str)
{
    char* s = new char[strlen(str) +1];
    strcpy(s, str);
    return s;
}

void f2(int n)
{
    vector<int>* pv = new vector<int>(n); // индивидуальный объект контейнера vector
    auto* pv_1 = new vector<int>(n);      // индивидуальный объект контейнера vector 1
    int* pi = new int[n];                 // массив int
    // операции очистки памяти различаются
    delete pv;
    delete pv_1;
    delete[] pi;
}

void f3()
{
    try {
        for(;;) new char[10000];
    }
    catch (bad_alloc) {
        cerr<<"Memory exhausted! \n ";
    }
}

void out_of_store() {
    cerr<<"operator new falied: out of store\n";
    throw bad_alloc();
}

// для конструирования создания значения типа Т из значения е использкуется функциональная форма записи Т(е)

void f4(double d)
{
    int i = int(d);         // усекаем d - отбрасываем дробную часть
    complex z = complex(d); // создаем complex из d
}

int main() {

    const char *str_in = "Test string";
    char str_out[20] = {};
    copy_arr(str_out, str_in);
    std::cout << "Hello, World!" << str_in << "****"<< str_out <<std::endl;

    copy_arr_2(str_out, str_in);
    std::cout << "Hello, World!" << str_in << "****2 ** "<< str_out <<std::endl;

    {
        set_new_handler(out_of_store); // делаем функцию out_of_store обработчиком нехватки памяти
        for(;;) new char[10000];
        cout<< "Done\n";
    }



    return 0;
}
