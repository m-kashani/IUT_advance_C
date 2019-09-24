//shomarande=2:(1):sqrt(n)+1 adad%shomarande==0 ==>exit(nist) //return 0;
#include <iostream>
#include <math.h> //-> 
using namespace std;
int main(){
	int shomarande = 2, adad;
	cout << "lotfan adade morede nazare khod ra vared konid:";
	cin >> adad;
	while (adad <= 0){
		cout << "bayad adadi + vared konid:";
		cin >> adad;
	}
	if (adad == 1){
		cout << "adad aval Nist\n";
		system("pause"); 
		return 0; 
	}
	else {
		while (shomarande <= sqrt(adad) + 1){
			if (adad%shomarande == 0){
				cout << "adad aval nist\n";
				system("pause");
				return 0;
			}
			shomarande++;
		}
	}
	cout << "adad aval hast\n";
	//system("pause");
	return 0;
}