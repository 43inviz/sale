#include <iostream>
using namespace std;

int main() {
	int user_price,total = 0,sale=0;
	const int MIN_PR = 1000;
	const int MID_PR = 2000;
	const int MAX_PR = 5000;
	cout << "enter ur price: ";
	cin >> user_price; 
	if (user_price > MIN_PR && user_price < MID_PR) {
		sale = (user_price / 100) * 5;
		total = user_price - sale;
		cout << "Total check: " << total << '$';

	}
	else if(user_price>MIN_PR && user_price < MAX_PR){
		sale = (user_price / 100) * 10;
		total = user_price - sale;
		cout << "Total check: " << total << '$';
	

	}
}