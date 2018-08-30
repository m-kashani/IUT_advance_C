#include <iostream>
using namespace std;
long int x;
long int fact(long int x);
int main(){
	long int sum;
	cout << "lotfan yek adad vared konid: \n";
	cin >> x;
	sum = fact(x);
	cout <<"fact(your number)= "<< sum <<endl;
	system("pause");
	return 0;
}
long int fact(long int x){
	int sum = 1;
	while(x != 0){
		sum *= (x);
		x--;
	}
	return sum;
}