using namespace std;

#include "main.h"

int Bad_pop();

int main() {
    cout << "Hello CMake." << endl;
    cout << "Hello CMake." << endl;
    cout << "Hello Elementary OS CMake." << endl;

    Stack s_var1(10);

    s_var1.push('f');

    return 0;
}

void f(Stack& s_ref, int i)
{
    Stack s_var2(i);
    Stack* s_ptr = new Stack(20);

    s_var2.push('y');
    s_ref.push('h');
    s_ptr->push('r');
}

void f1(Stack_v& s_ref)
{
    s_ref.push('h');
    if (s_ref.pop() != 'c') throw Bad_pop();
}

int Bad_pop() {
    return -1;
}

void g ()
{
    Array_stack as(200);
    //f(as, 2);
}