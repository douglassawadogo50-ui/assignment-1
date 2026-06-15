#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cout <<"Enter two integers:";
	cin >> num1 >> num2;
	
	cout <<"Sm:"  <<num1+num2  <<"\n";
	cout <<"Difference:"  <<num1-num2  <<"\n";
	cout <<"Product:"  <<num1*num2  <<"\n";
	
	if (num2 !=0) {
		cout <<"Quotient:"  <<num1/num2  <<"\n";
}
else{
	cout <<"Quotient: Undefined (division by zero) \n";
}

return 0;
}