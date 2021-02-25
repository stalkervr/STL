#include <iostream>

enum test {
    ASM, AUTO, BREAK
};

void f(test key){
    switch (key) {
        case ASM:
            std::cout<<"ASM key"<<std::endl;
            break;
        case AUTO:
            std::cout<<"AUTO key"<<std::endl;
            break;
        case BREAK:
            std::cout<<"BREAk key"<<std::endl;
            break;
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;



    return 0;
}
