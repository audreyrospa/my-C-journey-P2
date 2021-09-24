#include <iostream>
using namespace std;

int recursion(int n){
	if (n!=0){
		return n + recursion(n-1);
	}
	return 0;	
}

int main(){
	int n=0;
	cout <<"input n : "; cin >> n;
	cout << "\nS(" << n << ") = ";
	int i=1,S=0;
	while(i <= n){
		cout << i;
		if (i==n){}
		else{
			cout << "+";
		}
		S = S + i;
		i++;
	}
	cout << "\nS("<<n<<") = " << recursion(n) << endl;
	return 0;
}