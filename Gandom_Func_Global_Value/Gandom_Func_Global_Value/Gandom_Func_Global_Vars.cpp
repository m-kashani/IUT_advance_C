#include <iostream>
#define TEDAD_SHAHR 10
#define TEDAD_SAAL	5

using namespace std;

int GandomSaliyaaneh[TEDAD_SHAHR][TEDAD_SAAL];
int GandomSaliyaanehHarShahr[TEDAD_SHAHR];
int GandomKeshvarHarSaal[TEDAD_SAAL];

void gandomSaliyanehBekhaan(){
	int i, j;
	for (i = 0; i < TEDAD_SHAHR; i++){
		for (j = 0; j < TEDAD_SAAL; j++){
			cin >> GandomSaliyaaneh[i][j];
		}
	}
}

void mohasebehGandomSaliyanehShahrhaa(){
	int i, j;
	for (i = 0; i<TEDAD_SHAHR; i++) {
		int tolidShahrJ = 0;
		for (j = 0; j<TEDAD_SAAL; j++) {
			tolidShahrJ += GandomSaliyaaneh[i][j];
		}
		GandomSaliyaanehHarShahr[i] = tolidShahrJ;
	}
}

void main(void)
{
	gandomSaliyanehBekhaan();
	mohasebehGandomSaliyanehShahrhaa();
	system("pause");
}