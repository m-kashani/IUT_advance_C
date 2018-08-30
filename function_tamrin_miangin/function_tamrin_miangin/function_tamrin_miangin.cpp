#include<iostream>
using namespace std;
// tabeE miangin 
double miangin(double a, double b, double c)
{	
	int sum = 0;
	return (sum += a + b + c) / 3.0;
}
int main(){
	cout << miangin(2, 4, 7) << endl;
	system("pause");
	return 0;
}