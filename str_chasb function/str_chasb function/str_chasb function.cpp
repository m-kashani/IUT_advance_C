#include<iostream>
using namespace std;

void str_chasb_1(char *s1, const char *s2);
void str_chasb_2(char s1[], const char s2[]);
void str_chasb_3(char s1[], const char s2[]);
int main(){
	char vorodi_1[80], vorodi_2[80];
	cout << "lotfan name khod ra vared konid: \n";
	cin >> vorodi_1;
	cout << "lotfan familie khod ra vared konid: \n";
	cin >> vorodi_2;
	str_chasb_1(vorodi_1,vorodi_2);
	cout <<"esm va familie shoma barabar ast ba: " <<vorodi_1 << endl;
	system("pause");
	return 0;
}

void str_chasb_1(char *s1, const char *s2){
	while (*s1){// arayeye 1 ro mikhoone ta berese be 0;
		s1++; 
	}
	while (*s2){// az 0 shoro mikone be por kardan;
		*s1=*s2;
		s2++;
		s1++;
	}
	*s1 = '\0'; // 0 akhar string ro ezafe mikone;
}


void str_chasb_2(char s1[], const char s2[]){
	int i, j;
	for (i = 0; s1[i]; i++)
		for (j = 0; s2[j]; i++, j++)
			s1[i] = s2[j];
	s1[i] = '\0';
}



void str_chasb_3(char s1[], const char s2[]){
	int i, j;
	i = strlen(s1);
	for (j = 0; s2[j]; i++, j++)
			s1[i] = s2[j];
	s1[i] = '\0';
}