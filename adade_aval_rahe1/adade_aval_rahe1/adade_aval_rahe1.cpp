// shomarande = 1:(1):adad adad%i==0 ++k ==> k==2 (adad aval)
#include <iostream>
using namespace std;
int main(){
	int shomarande = 1, adad, TedadBakhshpaziri = 0;
	cout << "adade morede nazar khod ra vared konid: ";
	cin >> adad;
	while (shomarande <= adad){
		if (adad%shomarande == 0){
			TedadBakhshpaziri++;
		}
		shomarande++;
	}
	if (TedadBakhshpaziri == 2)
		cout << "adad aval ast\n";
	else
		cout << "adad aval Nist\n";
	//system("pause");
	return 0;
}
//1394/01/04 at 8:31 AM.