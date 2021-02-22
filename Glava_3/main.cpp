#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <map>
#include "Vec.h"

using namespace std;

void g();
void h(int i);

void m2(string& s1, string& s2);

void hello();

struct Entry{
    string name;
    int number;
};

struct Entry phone_book[1000];

void print_entry(int i) {
    cout<<phone_book[i].name<< " "<< phone_book[i].number<<"\n";
}

vector <Entry> phone_book_1 (1000);

void print_entry_1(int i) {
    cout<<phone_book_1[i].name<< " "<< phone_book_1[i].number<<"\n";
}

void add_entry(int n) {
    phone_book_1.resize(phone_book_1.size() + n);
}

void copy_v (vector<Entry>& v) {
    vector<Entry> v2 = phone_book_1;
    v = v2;
}

Vec<Entry>phone_book_2(1000);

void print_entry_2(int i) {
    cout<<phone_book_2[i].name<< " "<< phone_book_2[i].number<<"\n";
}

void check_range(){
    try {
        for (int i = 0; i<1000; i++) print_entry_2(i);
    }
    catch (out_of_range) {
        cout<<"Range error !\n";
    }
}

list<Entry>phone_book_4;

void print_entry_3(const string& s) {
    typedef list<Entry>::const_iterator LI;

    for(LI i=phone_book_4.begin(); i != phone_book_4.end(); ++i)
    {
        const Entry& e = *i;
        if(s==e.name)
        {
            cout<<e.name<<' '<<e.number<<'\n';
            return;
        }
    }
}

map<string,int>phone_book_5;

void print_entry_4(const string& s) {
    if (int i=phone_book_5[s])
    {
        cout<<s<<' '<<i<<'\n';
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::string s = "Four legs Good: two legs Baaad";
    std::list<std::string> slogans;

    string string1 = "Ignorance is bliss";
    string string2 = "Four legs Good: two legs Baaad";


    g();
    h(15);
    m2(string1, string2);
    hello();

    phone_book[0].name = "Ivan";
    phone_book[0].number = 89136561;

    print_entry(0);


    return 0;
}

void g (){
    int i = 10;
    cout<<i <<"\n";
}

void h(int i) {
    cout<<"The value of i is ";
    cout<<i;
    cout<<'\n';
}

void m2(string& s1, string& s2) {
    s1 = s1 + '\n';
    s2 += "! \n";
    cout << s1<<s2;
}

void hello() {
    string name;
    cout<<"Enter you name\n";
    getline(cin,name);
    cout<<"Hello "<< name<<" !\n";
}


