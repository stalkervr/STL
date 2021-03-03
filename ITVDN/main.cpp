#include <iostream>
#include "Stack.h"
using namespace std;



int main() {

    Stack* stack = new Stack(10);

    stack->Push(5);

    cout<<stack->Top()<<endl;

    system("pause");
}
