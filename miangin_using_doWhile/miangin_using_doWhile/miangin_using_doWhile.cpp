//barnameye mohasebeye miangin nomarat daneshjooyan
#include <iostream>
using namespace std;
int main(){
	int tedad = 0, nomre = 0,sum=0;
	do{
		cout << "nomreye daneshjo ra vared konid: ";
			cin >> nomre;
			if (nomre >= 0){
				sum += nomre;
				tedad++;
			}
	} while (nomre >= 0);

	cout << "tedad nomarate vared shode " << tedad <<"ta" << endl;
	cout << "miangin nomarat barabar ast ba: " << sum / tedad <<endl;
	system("pause");
	return 0;
}