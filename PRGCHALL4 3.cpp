#include <iostream>
using namespace std;

int main(){
	int date, month, year;
	
	cout << "Date : ";
	cin >> date;
	
	cout << "Month : ";
	cin >> month;
	
	cout << "Year - 2digit : ";
	cin >> year;
	
	if (year == date * month){
		cout << "The date is magical";
	}
	else {
		cout << "The date is not magical";
	}
	
	return 0;
}
