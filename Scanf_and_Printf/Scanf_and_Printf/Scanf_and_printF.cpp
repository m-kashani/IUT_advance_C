/*
TUTURIAL
scanf("%d", &a);    // bejaye cin >> (int)a;    baraye moteghayere sahih.
scanf("%f", &x);    // bejaye cin >> (float)a;  baraye moteghayere ashari.
scanf("%d%d", &a, &b); //baraye khoondane chandta moteghayer.
*/
//----------------------------------------------------------------------------
//exp() function by using scanf() and printf() 
#include <iostream>
#include <stdio.h>      //for scanf() & printf() finctions
//#include <math.h>
using namespace std;
int main(){
	float x,y;
	printf("baraye tabe E exp() yek vorudi tarif konid: \n");
	y=scanf_s("%f",&x);
	printf("exp(%f) = %f \n", x, y);
	system("pause");
	return 0;
}