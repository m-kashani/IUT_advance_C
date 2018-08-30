#include <iostream>
#include <stdlib.h>
#include <malloc.h>
using namespace std;
void main(){
	long int n, i;
	int *nomre;
	cout << "chand ta khune mikhahi ?";
	cin >> n;
	nomre = (int *)malloc(n * sizeof(int));
	if (nomre = NULL){
		cout << "lanati in chera hamash mire too in halghe? " << endl;
		system("pause");
		exit(0);
	}
	for (i = 0; i <= n; n++){
		cin >> nomre[i];
	}
	for (i = 0; i <= n; n++){
		cout << "nomre " << i << " " << nomre[i]<<endl;
	}
	free(nomre);
	system("pause");
}