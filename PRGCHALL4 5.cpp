#include <iostream>
using namespace std;

int main (){
	float w, h, bmi;
	
	cout << "input weight : ";
	cin >> w;
	
	cout << "input heigth : ";
	cin >> h;
	
	bmi = w * (703/h*h);
	
	if (bmi < 18.5){
		cout << "u are underweigth";
	}
	else if (bmi > 25){
		cout << "u are overweigth";
	}
	else {
		cout << "propotional";
	}
	return 0;
}
