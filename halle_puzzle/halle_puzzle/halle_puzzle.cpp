/*
There are 5 clues to open an attached file ==> x1,x2,x3,x4,x5
x5+x3=14
x4=x2+1
x1=(2*x2)-1
x2+x3=10
x1+x2+x3+x4+x5 = 30
*/
int x1, x2, x3, x4, x5;
#include <iostream>
using namespace std;
int main(){
	for (x1 = 0; x1 < 10; x1++){
		for (x2 = 0; x2 < 10; x2++){
			if (x1 != (2 * x2) - 1){ continue; }
			for (x3 = 0; x3 < 10; x3++){
				if (x2 + x3 != 10){ continue; }
				for (x4 = 0; x4 < 10; x4++){
					if (x4 != x2 + 1){ continue; }
					for (x5 = 0; x5 < 10; x5++){
						if (x5 + x3 != 14 || x1 + x2 + x3 + x4 + x5 != 30){
							continue;
						}
						else
							cout << "your pass is: " << x1 << x2 << x3 << x4 << x5<<endl;
					}
				}
			}
		}
	}

	system("pause");
	return 0;
}
