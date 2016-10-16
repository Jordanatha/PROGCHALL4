#include <iostream>
using namespace std;

int main (){
	float s;
	
	cout << "input time : ";
	cin >> s;
	
	if (s >= 60 && s < 3600){
		cout << s / 60 << "minutes";
	}
	else if (s >= 3600 && s < 86400){
		cout << s / 3600 << "hours";
	}
	else {
		cout << s / 86400 << "days";
	}
	return 0;
	
}
