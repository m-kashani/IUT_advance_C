// using_struct
#include <iostream>
using namespace std;

struct KharejeGhesmat_Baghimande my_taghsim_3(int number_1, int number_2);
struct KharejeGhesmat_Baghimande{
	int khareje_ghesmat;
	int baghimande;
};

int main(){

	int num, den,khareje_ghesmat,baghimande;
	cout << "lotfan 2 adad vared konid: \n";
	cin >> num >> den;

	struct KharejeGhesmat_Baghimande girande;

	girande = my_taghsim_3(num, den);

	cout << "khareje ghesmate taghsime " << num << " bar " << den << "= " << girande.khareje_ghesmat<< endl;
	cout << "baghimandeye taghsime " << num << " bar " << den << "= " << girande.baghimande << endl;
	system("pause");
	return 0;
}
struct KharejeGhesmat_Baghimande my_taghsim_3(int number_1, int number_2){
	
	if (number_2 == 0){
		cout << "error" << endl << "den number couldn't be ZERO " << endl;
		system("pause");
		exit(0);
	}
	else{
		struct KharejeGhesmat_Baghimande Kh_va_bgh;
		Kh_va_bgh.baghimande = number_1%number_2;
		Kh_va_bgh.khareje_ghesmat = number_1 / number_2;
		return Kh_va_bgh;
	}
}