#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	double a;
	cout << "yek adad be delkhah vared konid: ";
	cin >> a;
	if (0 < a && a < 5){
		cout << "yes\n";
	}
	else{
		cout << "no\n";
	}
	system("pause"); //getch() & cin.get javab nemidadan :-( MORDAM (30 min)
	return 0;

}