#include <iostream>
using namespace std;

int main (){
	int book;
	
	cout << "number of book(s) : ";
	cin >> book;
	
	if (book == 0){
		cout << "0 points";
	}
	else if (book == 1){
		cout << "5 points";
	}
	else if (book == 2){
		cout << "15 points";
	}
	else if (book == 3){
		cout << "30 points";
	}
	else {
		cout << "60 points";
	}
	return 0;
}
