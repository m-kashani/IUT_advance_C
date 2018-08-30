#include <iostream>
using namespace std;
int shomarande_1(char *s){
	int tool = 0;
	while (*s){
		tool++;
		s++;
	}
	return tool;
}

int shomarande_2(char s[]){
	int tool = 0;
	for (; s[tool]; tool++); {
		return tool;
	}
}

void main(){
	char name[80];
	cout << "lotfan name khod ra vared konid: \n";
	cin >> name;

	cout << "toole reshte= " << tool <<endl;
	system("pause");
}