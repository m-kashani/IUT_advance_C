//learning strlen() and strcat_() functions.
#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char name[80], family[80];
	cout << "lotfan name khod ra vared konid: \n";
	cin >> name;
	cout << "esme shoma az " << strlen(name) << " character tashkil shode ast\n";
	
	cout << "lotfan familie khod ra vared konid: \n";
	cin >> family;
	strcat_s(name, family);
	cout << "name va name khanevadegie shoma = " << name << endl;
	system("pause");
	return 0;
}