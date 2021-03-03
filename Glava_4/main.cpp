#include <iostream>

enum test {
    ASM, AUTO
};

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

int main() {
    std::cout << "Hello, World! -- "<< sizeof (test)<< std::endl;



    return 0;
}
