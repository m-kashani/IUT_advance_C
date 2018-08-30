#include <iostream>
using namespace std;

void jame_2_array(int array_1[5],int array_2[5],int c[5],int n);

int main(){
	int array_A[5] = { 1, 2, 3, 4, 5 };
	int array_B[5] = { 10, 20, 30, 40, 50 };
	int c[5];
	cout << "jamE 2 arraye barabar ast ba: "<<endl ;
	jame_2_array(array_A, array_B, c, 5);
	system("pause");
	return 0;
}

void jame_2_array(int array_1[5], int array_2[5] , int array_3[5],int n){
	for (int i = 0; i < n; i++){
		array_3[i] = array_1[i] + array_2[i];
	}
}