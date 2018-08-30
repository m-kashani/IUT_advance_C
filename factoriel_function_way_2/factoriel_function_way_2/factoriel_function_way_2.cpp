#include <iostream>
using namespace std;
void fact(int x, long int *p);
int main(){
	int x;
	long int p;
	cout << "lotfan yek adad vared konid: ";
	cin >> x;
	fact(x, &p);
	cout << x << "! =" << p << endl;
	system("pause");
	return 0;
}
void fact(int x, long int *p){
	long int fact = 1;
	while (x){
		fact *= x;
		x--;
	}
	*p = fact;
}