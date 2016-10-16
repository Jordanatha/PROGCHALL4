#include <iostream>
using namespace std;

int main (){
	int w1, l1, w2, l2, area1, area2;
	
	cout << "input width and lenght 1 : ";
	cin >> w1;
	cin >> l1;
	
	cout << "input width and length 2 : ";
	cin >> w2;
	cin >> l2;
	
	area1 = w1 * l1;
	area2 = w2 * l2;
	
	if (area1 > area2){
		cout << "rectangle 1 is bigger than 2";
	}
	else {
		cout << "rectangle 2 is bigger than 1";
	}
	
	return 0;
}
