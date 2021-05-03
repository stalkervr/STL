#include <iostream>
#include <string>
#include <cstring>
#include <vector>

//#include <boost/array.hpp>

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
//int& l_array = *array;

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

// reference

void r_f();
void r_g();

// double& dd = 1; error
const double& ddd = 1;

// можно интертрепировать последнюю инициализацию как
double temp = double(1);
const double& cdr = temp;

void increment(int& a);

void r_f2() {
    int x = 1;
    increment(x);
}

// лучше делать явно

int incr_1(int pp) { return pp + 1;}
void incr_2(int* ppp) { (*ppp)++;}

void r_f3() {
    int x = 1;
    increment(x); // x=2
    incr_1(x);       // x=3
    incr_2(&x);      // x=4
}

struct Pair
{
    string name;
    double val;
};

vector<Pair> pairs;

double& value (const string& sss)
{
    /*
     * поддерживает набор пар Pair:
     * ищет строку s если найдена возвращает соответствующее значение,
     * в противном случае создает новый Pair и возвращает 0
     */
    for (int i3 = 0; i3 < pairs.size(); i3++)
    {
        if (sss == pairs[i].name)
        {
            return pairs[i].val;
        }
    }
    Pair par = {sss, 0};
    pairs.push_back(par); // добавляем созданную пару в конец вектора pairs
    return pairs[pairs.size() - 1].val;
}

void f_void(int* pi)
{
    void* pv = pi; // ок неявное преобразование из int* в void*
    // *pv; // error нельзя разименовывать void*
    // pv++ // error нельзя инкрементировать void*
            // неизвестен размер указуемого объекта
    int* pi2 = static_cast<int*>(pv); // явное преобразование в int*
    //double* pd1 = pv; // error
    //double* pd2 = pi; // error
    double* pd3 = static_cast<double*>(pv); // небезопасно !!! но допустимо
}

struct address {
    const char* name;      // "Jim Dandy"
    long int number; // 61
    const char* street;    // "South Str"
    const char* town;      // "New York"
    char state[2];   // 'N' 'J'
    long int zip;    // 7974
};

void f_aaa ()
{
    address jd;
    jd.name = "Jim Dandy";
    jd.number = 61;
}

address jd_1 = {"Jim Dandy", 61, "South Str", "New York", {'N','J'}, 7974};

/*
 * для указателя р выражение p->m зквивалентно выражнию (*p).m
 */

void print_address (address* p_adr)
{
    cout<<p_adr->name<<'\n'
        <<p_adr->number<<'\n'
        <<p_adr->street<<'\n'
        <<p_adr->town<<'\n'
        <<p_adr->state[0]<<p_adr->state[1]<<' '<<p_adr->zip<<'\n';
}

/*
 * Объекты структурных типов можно присваиваить, передавать в функции и возвращать из функций
 */

address current;

address set_current(address next)
{
    address prev = current;
    current = next;
    return prev;
}

/*
 * имя нового типа можно использовать сразу после объявления до
 * его полного определения
 */

struct Link {
    Link* previous;
    Link* successor;
};

struct List;

struct Link_1{
    Link* prev;
    Link* suc;
    List* member_of;
};

struct List{
    Link* head;
};

int main() {
/*
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
*/
    string buff;

    while(cin >> buff) value(buff)++;
    for (vector<Pair> :: const_iterator cp = pairs.begin(); cp != pairs.end(); ++cp)
        cout << cp->name << " : " << cp->val << '\n';
    /*
     * for (auto & pair : pairs)
     *  cout << pair.name << " : " << pair.val << '\n';
     */
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

void r_f() {
    int ri = 1;
    int& rr = ri; // rr & ri теперь ссылаются на одно целое
    //int& r_rr; error
    extern int& rrr;
    int x = r;
    ri = 2;
}

void r_g() {
    int ii = 0;
    int& rr = ii;
    rr++; // ii multiply at 1
    int* pp = &rr; // pp point to ii
}

void increment(int &a) {
    a++;
}


