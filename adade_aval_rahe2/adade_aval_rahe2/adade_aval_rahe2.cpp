//shomarande = 2:(1):sqrt(add)+1 add%shomarande tedadbakhshpaziri++==>if=0(adad aval)
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int shomarande = 2, tedad_bakhshpaziri = 0, adad;
	cout << "lotfan adade morede nazare khod ra vared konid: ";
	cin >> adad;
	//Adade aval adadist +
	while (adad <= 0){
		cout << "bayad adade + vared konid:";
			cin >> adad;
	}
	//EstesnaAt (1 va 2)
	if (adad == 1){
		cout << "adad aval Nist\n";
	}
	else if (adad == 2){
		cout << "adad aval ast\n";
	}
	//Barnameye Koli :-)
	else{
		while (shomarande <= sqrt(adad) + 1){
			if (adad%shomarande == 0){
				tedad_bakhshpaziri++;
			}
			shomarande++;
		}
		if (tedad_bakhshpaziri == 0){
			cout << "adad aval ast\n";
		}
		else{
			cout << "adad aval Nist\n";
		}
	}
system("pause");
return 0;
}