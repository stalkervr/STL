#include <iostream>
#include <cstring>


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

int main() {

    const char *str_in = "Test string";

    char str_out[20] = {};

    copy_arr(str_out, str_in);


    std::cout << "Hello, World!" << str_in << "****"<< str_out <<std::endl;


    copy_arr_2(str_out, str_in);

    std::cout << "Hello, World!" << str_in << "****2 ** "<< str_out <<std::endl;


    return 0;
}
