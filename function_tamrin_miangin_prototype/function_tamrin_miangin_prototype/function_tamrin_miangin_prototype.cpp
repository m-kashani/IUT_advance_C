#include <iostream>
using namespace std;

double miyangin(int, int, int);

int main(){

	cout << miyangin(1, 2, 3)<< endl;

	system("pause");
	return 0;
}

double miyangin(int a, int b, int c){
	int sum = 0; double miangin;
	sum += a + b + c;
	return (miangin) = (double)sum / 3;
}