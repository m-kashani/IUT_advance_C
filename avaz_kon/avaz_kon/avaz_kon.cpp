#include <iostream>
using namespace std;

void avaz_kon(double *a,double *b);

int main(){
	double x, y;
	cout << "lotfan 2 adad vared konid: \n";
	cin >> x >> y;
	cout << "x=" << x <<" y=" <<y <<endl;

	avaz_kon(&x, &y);

	cout << "x=" << x << " y=" << y <<endl;
	system("pause");
	return 0;
}
void avaz_kon(double *a,double *b){
	double c;
	c = *a;
	*a = *b;
	*b = c;
}