#include<iostream>
using namespace std;
long recursive_fibonachi(int*adad_1,int*adad_2,int n){ //show number n of fibonachi series
	if (n == 1){
		return *adad_1;
	}
	if (n == 2){
		n--;
		return *adad_2;
	}
	else{
		n--;
		return recursive_fibonachi(adad_1,adad_2, n) + recursive_fibonachi(adad_1,adad_2, n - 1);
	}
}

int main(){
	int adad_1, adad_2,jomleye_n_om;
	long fibonachi;
	cout << "lotfan jomleye aval va dovome serie fibinachi khod ra vared konid: \n";
	cin >> adad_1 >> adad_2;
	if (adad_1 <= 0 || adad_2 <= 0 || adad_2 < adad_1){
		cout << "hamchin jomleyi vojood nadarad: \n";
		system("pause");
		exit(0);
	}
	cout << endl << "jomleye chandome seri ra mikhahid? \n";
	cin >> jomleye_n_om;
	if (jomleye_n_om <= 0){
		cout << "kheili BI_SHarafi \n";
		system("pause");
		return 0;
	}
	fibonachi = recursive_fibonachi(&adad_1, &adad_2, jomleye_n_om );
	cout << "fibonachi " << fibonachi << endl;
	system("pause");
	return 0;
}