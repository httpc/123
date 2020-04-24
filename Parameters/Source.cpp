#include <iostream>
using namespace std;

#define BY_VALUE
//#define BY_POINTER
//#define BY_REFERENCE

#ifdef BY_VALUE
void Exchange(int* a, int* b);
#endif // BY_VALUE
#ifdef BY_POINTER
void Exchange(int* a, int* b);
#endif // BY_POITER
#ifdef BY_REFERENCE
void Exchange(int* a, int* b);
#endif // BY_REFERENCE


void main()
{
	int a = 2, b = 3;
	cout << a << "\t" << b << endl;
	Exchange(&a, &b);
	cout << a << "\t" << b << endl;

#ifdef BY_REFERENCE

	int& ra= a;
	cout << ra << endl;
	ra += 3;
	cout << a << endl;
#endif // BY_REFERENCE

}

#ifdef BY_VALUE
void Exchange(int a, int b)
{
	int buffer = a;
	a = b;
	b = buffer;
	cout << a << "\t" << b << endl;
}
#endif // BY_VALUE

#ifdef BY_POINTER
void Exchange(int* a, int* b)
{
	int buffer = *a;
	*a = *b;
	*b = buffer;
	cout << *a << "\t" << *b << endl;
}
#endif // BY_POINTER

