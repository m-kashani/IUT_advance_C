#include <iostream>
//#include <math.h>
using namespace std;
int main(){
	double x, a;
	cout << "lotfan yek adad vared konid: " << endl;
	cin >> a;
	x = exp(a);
	cout << "exp(" << a << ")= " << x << endl;
	system("pause"); //getch() & cin.get javab nemidadan :-( MORDAM (30 min)
	return 0;
}