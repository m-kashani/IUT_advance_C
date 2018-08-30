#include <iostream>
using namespace std;

double change_two_number(double num_a,double num_b,double *the_other_one);

int main(){
	double a, b,another_one;
	cout << "please Enter 2 number: "<<endl;
	cin >> a >> b;
	cout << "your first number was: " << a <<endl;
	cout << "your second number was: " << b <<endl;

	b = change_two_number(a,b,&another_one);
	a = another_one;
	cout << "your new first number is: " << b <<endl;
	cout << "your new second number is: " << a <<endl;
	system("pause");
	return 0;
}
double change_two_number(double num_a, double num_b, double *the_other_one){
	*the_other_one = num_a;
	return num_b;
}