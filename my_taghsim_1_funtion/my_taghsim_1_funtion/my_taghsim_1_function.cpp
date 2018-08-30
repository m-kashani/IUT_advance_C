//using a function that return more than one value
#include <iostream>
using namespace std;

int my_taghsim_1(int a, int b , int *khareje_gh );

void main(){
	int a,b, baghimande, khareje_ghesmat;
	cout << "2 adad vared konid: \n";
	cin >> a >> b;

	baghimande = my_taghsim_1(a, b, &khareje_ghesmat);
	cout << "khareje_ghesmat: " << khareje_ghesmat<<endl;
	cout << "baghimande: " << baghimande << endl;

	system("pause");
}
int my_taghsim_1(int c, int d,int *khareje_gh){
	*khareje_gh = c / d;
	return c%d;
}