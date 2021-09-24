#include <iostream>
using namespace std;

int bTd(int b){
	int d = 0;
	int a = 1;
	int k = b;
	while (k){
		int dt = k % 10;
		k = k / 10;
		d+=dt*a;
		a=a*2;
	}
	return d;
}

int main()
{
	int bTd;
	cout << "caesar says = hfgxybaxqxmfhfqxpxgr" <<cc("cdef",2);

	return 0;
}
