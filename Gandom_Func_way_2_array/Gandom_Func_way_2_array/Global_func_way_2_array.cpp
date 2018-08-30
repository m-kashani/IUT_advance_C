#include<iostream>
#define TEDAD_SHAHR 10
#define TEDAD_SAAL	5

using namespace std;

void jameBordar(int *A, int B[], int C[10]);

void zarbMatris(const int A[][10], const int B[][10],
	int C[10][10])
{
	C[5][5] = 0;
	// KHATAA  
	// A[0][0] = 9;
}

void gandomSaliyanehBekhaan(
	int GandomSaliyaaneh[TEDAD_SHAHR][TEDAD_SAAL])
{
	int i, j;
	for (i = 0; i<TEDAD_SHAHR; i++)
		for (j = 0; j<TEDAD_SAAL; j++)
			cin >> GandomSaliyaaneh[i][j];
}

void mohasebehGandomSaliyanehShahrhaa(
	const int gandomSaliyaaneh[TEDAD_SHAHR][TEDAD_SAAL],
	int gandomSaliyaanehHarShahr[TEDAD_SHAHR])
{
	int i, j;
	for (i = 0; i<TEDAD_SHAHR; i++) {
		int tolidShahrJ = 0;
		for (j = 0; j<TEDAD_SAAL; j++) {
			tolidShahrJ += gandomSaliyaaneh[i][j];
		}
		gandomSaliyaanehHarShahr[i] = tolidShahrJ;
	}
}

void main(void)
{
	int GandomSaliyaaneh[TEDAD_SHAHR][TEDAD_SAAL];
	int GandomSaliyaanehHarShahr[TEDAD_SHAHR];
	int GandomKeshvarHarSaal[TEDAD_SAAL];

	gandomSaliyanehBekhaan(GandomSaliyaaneh);
	mohasebehGandomSaliyanehShahrhaa(GandomSaliyaaneh,
		GandomSaliyaanehHarShahr);
	system("pause");
}