#include<iostream>
#include <vector>


int main() {
	int n, k;
	std::cin >> n >> k;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}

	int count = 0;
	for (int i = 0; i < n; i++) {
		int q = k / v[n - i - 1];
		count += q;
		k = k % v[n - 1 - i];
	}
	std::cout << count;

}