#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int adad_mabna_8=0, adad_mabna_10 = 0, tavan = 0, adade_miane=0, sum = 0;
//gereftan adade mabna 8 !
	cout << "lotfan adad delkhah khod ra dar mabnaye 8 vared konid: ";
	cin >> adad_mabna_8;
//Etminan az + boodane adade vared shode
	while (adad_mabna_8 < 0){
		cout << "mabnaye manfi too madar manteghie! hanooz pasesh nakardam lotfan adade mosbat vared kon: ";
		cin >> adad_mabna_8;
		}
//Tabdil az mabnaye 8 be mabnaye 10 (rahe koli)
	adade_miane = adad_mabna_8; 
	while (adade_miane){
//check kardane mabnaye 8 boodane adad
		if (adade_miane % 10 >= 8)
		{
			cout << "hamchin adadi dar mabnaye 8 mojaz nemibashad.\n";
			cout << "lotfan mojadadan yek adad dar mabnaye 8 vared konid: ";
			cin >> adad_mabna_8;
			adade_miane = adad_mabna_8;
			continue;
		}
//payan check kardane mabnaye 8 boodane adad
		sum += int(adade_miane % 10)* int(pow(8, tavan));
		adade_miane /= 10;
		tavan++;
	}
	adad_mabna_10 = sum;
		cout << "adade vared shode dar mabnaye Hasht= " << adad_mabna_8 <<endl;
		cout << "adade vared shode dar mabnaye Dah= " << adad_mabna_10 <<endl;
	
	system("pause");
	return 0;
}