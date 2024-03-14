#include<iostream>

using namespace std;

class date	{
	int day, month, year;
	public:
	void getdate();
	void showdate();
};
void date::getdate()	{
	char slash;
	cout<<"Enter date in dd/mm/yy formate : ";
 	cin>>day>>slash>>month>>slash>>year;
}
void date::showdate() {
	cout<<"Date : ";
	printf("%02d", day),	cout<<"/";
	printf("%02d", month),	cout<<"/";
	printf("%02d", year);
}

int main() {
	date random;
	random.getdate();
	random.showdate();
	return 0;
}





