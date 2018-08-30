#include <iostream>
using namespace std;
long int my_fact_recursive(int x);
int main(){
	int x;
	long int sum;
	cout << "lotfan yek adad vared konid: \n";
	cin >> x;

	sum=my_fact_recursive(x);

	cout <<x<<"!= "<<sum <<endl;

	system("pause");
	return 0;
}
long int my_fact_recursive(int x){
	while (x < 0){
		cout << "factoriel baraye adaade manfi bi manie\nlotfan adad mosbat vared konid: \n";
		cin >> x;
	}
		if (x == 0 || x == 1)
			return 1;
		else
			return x*my_fact_recursive(x - 1);
	}