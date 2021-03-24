#include <iostream>
#include "Stack.h"
#include "List.h"
#include <array>
#include <set>
#include <vector>
#include <deque>
using namespace std;



int main() {

//    Stack st(10);
//
//    st.Push(5);
//
//    cout<<st.Top()<<endl;

//    List ls;
//
//    ls.AddToHead(1);
//    ls.AddToHead(2);
//    ls.AddToHead(3);
//    ls.AddToTail(4);
//    ls.AddToTail(5);
//
//    ls.Show();
//
//    ls.DeleteFromHead();
//    ls.DeleteFromHead();
//
//    cout<<endl;
//    ls.Show();

//    set <int> st;
//    st.insert(1);
//    st.insert(2);
//    st.insert(3);
//    st.insert(4);
//    st.insert(5);
//
//    st.insert(1);
//
//    for(const auto& el : st )
//    {
//        cout << el << " " << endl;
//    }
// Lesson 5

    vector<int> vec(10);
    cout<< vec.size() << " " << vec.capacity() << endl;

    for(size_t i=0; i < vec.size(); i++)
    {
        cout<< vec[i]<<" ";
    }
// Lesson 9

    int* arr = new int [10];

    arr[0] = 10;
    *(arr + 0) = 10;

    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    system("pause");
}
