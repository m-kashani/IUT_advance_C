#include <iostream>
using namespace std;
long recursive_tavan(int a,int b){
	if (b == 0){
		return 1;
	}
	return a*recursive_tavan(a, b - 1);
}

int main(){
	int a, b, c;
	cout << "2 adad vared konid: \n";
	cin >> a >> b;
	c = recursive_tavan(a, b);
	cout << a << "^" << b << " = " << c << endl;
	system("pause");
	return 0;
}