#include <iostream>
using namespace std;
void my_taghsim_2(int number_1, int number_2, int *khrj_gh, int *bagh);


int main(){
	int num, den, khareje_ghesmat, baghimande;
	cout << "lotfan 2 adad vared konid: \n";
	cin >> num >> den;
	
	my_taghsim_2(num, den, &khareje_ghesmat, &baghimande);
	
	cout << "khareje ghesmate taghsime " << num << " bar " << den << "= " << khareje_ghesmat <<endl;
	cout << "baghimandeye taghsime " << num << " bar " << den << "= " << baghimande<<endl;
	system("pause");
	return 0;
}
void my_taghsim_2(int number_1, int number_2, int *khareje_ghesmat, int *baghimande){
	if (number_2 == 0){
		cout << "error"<<endl<<"den number couldn't be ZERO "<<endl;
		system("pause");
		exit(0);
	}
	else{
		*khareje_ghesmat = (number_1 / number_2);
		*baghimande = (number_1 % number_2);	
	}
}