//shomarande=1(1):sqrt(n) + 1 adad%shomarande == 0 == >exit(nist) //break ;
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int shomarande = 2, adad ,flag_for_break=0;
	cout << "lotfan adade morede nazare khod ra vared konid:";
	cin >> adad;
	while (adad <= 0){
		cout << "bayad adadi + vared konid:";
		cin >> adad;
	}
	if (adad == 1){
		cout << "adad aval Nist\n";
	}
	else if (adad == 2){
		cout << "adad aval hast\n";
	}
	else{
		while (shomarande <= sqrt(adad) + 1){
			if (adad%shomarande == 0){
				cout << "adad aval nist\n";
				flag_for_break = 1;
				break;
			}
			}
		if(flag_for_break = 0){
			cout << "adad aval hast\n";
			shomarande++;
		}
//continue :
// faghat oon dor ro anjam nemide vali dobare az while shoroo mikone
	}
	system("pause");
	return 0;
}