#include <iostream>
using namespace std;

int main()
{
	int *a, *b, d=10, e=20;

a=&d;

b=a;

*a=*b+e;

e=e+5;

a=&e;

cout << d;
system("pause");
	return 0;
}
