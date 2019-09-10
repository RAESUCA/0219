#include <iostream>
using namespace std;

int func(int n ){
	int i, prod=0;
	for (i=0;i<n;i++){
		prod = prod + (i+1);
	}
	return prod;
	
}

int main()
{
	int a;
	cin >> a;
	cout << func(a);
}