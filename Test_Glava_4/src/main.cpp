// g++ -Wall -o test main.cpp

#include <iostream>
#include <math.h>
#include <complex>
using namespace std;

char ch = 'n';
string s = "Test string";
int count = 1;
const double pi = 3.14;
extern int error_number;
const char* name = "Nia";
const char* season[] = {"spring", "summer", "fall", "winter"};

struct Date
	{
		int day;
		int month;
		int year;
	};

int day (Date* p);	
double sqrt1 (double num);

template <class T> T abs1(T a)
{
	return a < 0 ? -a : a;
}

typedef complex <short> Point;


struct User
{
	string name;
	int age;
};

enum Beer { Carlberg, Tuborg, Thor };

namespace NS {int a_test;}

//error_number = 5;

int convert (char a);

int main(int argc, char *argv[])
{

	Date first;
	first.day = 10;
	first.month = 12;
	first.year = 2000;

	Point one = 6;
	

	cout << sqrt1(25) << endl;
	cout << abs1(-555) << endl;
	cout << s << " "<< name << endl;
	cout << convert(ch) << endl;



	cout << "Hello world! " << day(&first) << std::endl;
}

int day (Date* p)
{
	return p->day;
}

double sqrt1 (double num)
{
	return sqrt(num);
}

int convert (char a)
{
	return (int)a;
}