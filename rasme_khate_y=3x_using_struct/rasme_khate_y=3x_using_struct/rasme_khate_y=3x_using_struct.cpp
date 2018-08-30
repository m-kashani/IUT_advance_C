#include <iostream> 
#define Tedad_noghte 100
using namespace std;
struct Noghte{
	int x; // tool
	int y; // arz
};
int main(){
	struct Noghte noghtehaa[Tedad_noghte];
	for (int i = 0; i < Tedad_noghte; i++){
		noghtehaa[i].x=i;
		noghtehaa[i].y = (noghtehaa[i].x) * 3 ;
	}

	system("pause");
	return 0;
}