#include <iostream>
using namespace std;
int main(){
	int matris[10][4];// 10 = satr , 4 = sotoon
	int taranahade[4][10];
	int i, j; 
	//gereftane 40 adad baraye matris voroodi
	cout << "baraye matris 10 dar 4 40 adad delkhah vared konid: ";
	for (i = 0; i <= 10; i++){
		for (j = 0; j <= 4; j++){
			cin >> matris[i][j];
		}
	}
	//chape matris voroodi
	cout << "matris voroodi shoma= " << endl;
	for (i = 0; i < 10; i++){
		for (j = 0; j < 4; j++){
			cout << matris[i][j];
			taranahade[j][i] = matris[i][j];
		}
		cout << endl << endl;
	}
	//chape taranahade (rahe kalak ) rahe asli ine ke taranahade ro chap konam;
	cout << "Taranahadeye matris voroodi shoma= " << endl;
	for (j = 0; j < 4; j++){
		for (i = 0; i < 10; j++){
			cout << matris[i][j]<<" ";
		}
		cout << "endl";
	}
	system("pause");
	return 0;
}