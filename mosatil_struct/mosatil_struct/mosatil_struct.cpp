#include<iostream>
#define Tedad_noghte 100 
using namespace std;
struct Noghte{
	int x;
	int y;
	/*یک بلاک بنام نقطه تعریف کردم که ویژگی های مخصوص خودشون نظیر اکس و ایگرگ رو دارن*/
};
struct Mostatil{
	int tool,arz;
	struct Noghte Goosheyechap_payin;
	struct Noghte Goosheyerast_bala;
	/*یک بلاک به نام مستطیل تعریف کردم که توش طول و عرض ویژگی های مخصوصشه و توش یک بلاک دیگه هست*/
};
int main(){
	struct Noghte noghtehaa[Tedad_noghte];// یک ارایه بنام نقطه-هــااز ساختار نقطه
	struct Mostatil *m ; // یک عضو از بلاک مسطتطیل بنام ام
	
	for (int i = 0; i < Tedad_noghte ; i++){
		noghtehaa[i].x = i; // 100 x delkhah ke az ghabl darimesh
		noghtehaa[i].y = (noghtehaa[i].x) * 3;
	}
	// m -> Goosheyechap_payin.x=8;
	// (*m).Goosheyechap_payin.x = 8;
	system("pause");
	return 0;
}