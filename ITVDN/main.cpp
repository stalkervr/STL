#include <iostream>
#include "Stack.h"
#include "List.h"
using namespace std;



int main() {

//    Stack st(10);
//
//    st.Push(5);
//
//    cout<<st.Top()<<endl;

    List ls;

    ls.AddToHead(1);
    ls.AddToHead(2);
    ls.AddToHead(3);
    ls.AddToTail(4);
    ls.AddToTail(5);

    ls.Show();

    ls.DeleteFromHead();
    ls.DeleteFromHead();

    cout<<endl;
    ls.Show();


    system("pause");
}
