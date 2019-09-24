// Chape N bar salam using WHILE
#include <iostream>
using namespace std;
int main(){
	int tekrar;
	cout << "chand bar mikhahid chap shavad ? ";
	cin >> (tekrar);
	int i = 1;
	while (i<= tekrar){
		cout << "salam " << i <<endl;
		i++;
    }
	cout << "payan \n";
	system("pause");
	return 0;
}

// Fixed a bug related to the Void main()
// https://www.quora.com/Why-should-we-use-int-main-instead-of-void-main-in-C++
// Executed with g++ at the same time watching the mohammad Algharbi Protein computational biology presentation from Harvard. :))