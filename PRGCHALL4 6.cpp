#include <iostream>
using namespace std;

int main (){
	float w, m;
	
	cout << "input mass : ";
	cin >> m;
	
	w = m * 9.8;
	
	if (w > 1000){
		cout << "too heavy" << w;
	}
	else if (w < 10){
		cout << "too light" << w;
	}
	else {
		cout << w;
	}
	return 0;
}
