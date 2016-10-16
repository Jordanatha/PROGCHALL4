#include <iostream>
using namespace std;

int main(){
	int num1, num2;
	
	cout << "please input 2 numbers : ";
	cin >> num1;
	cin >>num2;
	
	if (num1>num2){
		cout << "max num is : " <<num1 << endl;
	}
	else {
		cout << "max num is : " << num2;
	}
	
	return 0;
}
