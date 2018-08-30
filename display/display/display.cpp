#include <fstream>
using namespace std;
void main(void)
{
	ofstream file("test.dis"); 
	file << "SL " << 20 << " " << 40 << " " << 30 << " " << 80 << "\n";
	file << "COLOR BLUE" << "\n";
	file << "SR 50 50 120 110\n";
}
/*in barname bekomake khate 4 yek file .dis dorost kard va toosh oon file haro 
neveshe */