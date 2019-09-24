#include <iostream>
using namespace std;
long tavan(int a, int b); // In this way we define that this is a function.
int main(){
	long sum = 0;
	int a, b;
	cout << "lotfan be paye va tavan morede nazare khod meghdar dahid: \n";
	cin >> a >> b;
	sum = tavan(a, b);
	cout << a << "^" << b << "= " << sum <<endl;
	system("pause");
	return 0;
}
long tavan(int a, int b){  // Then we define the function.
	long sum = 0;
	for (int i = 0; i < b-1; i++){
		a = a*a;
	}
	return a;
}