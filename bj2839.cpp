#include<iostream>


int main() {
	int x = 0; int y= 0 ;
	int n;
	int sum = 0;
	bool a = 0;
	std::cin >> n;
	if (double(n) / double(3) < 1)
		std::cout << -1;
	else if (n == 4)
		std::cout << -1;
	else {
		while (x <= (n / 3)) {
			sum = 2 * x + n;
			if (sum % 5 != 0) {
				x++;
				a = false;
			}
			else {
				a = true;
				break;
			}
		}
		if (a == true) {
			std::cout << sum/5;
		}
		else
			std::cout << -1;
	}
}