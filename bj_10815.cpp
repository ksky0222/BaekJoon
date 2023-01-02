#include <iostream>
#include <vector>


int main() {
	int N;
	std::cin >> N;
	std::vector<int> v1(N);
	for (int i = 0; i < N; i++) {
		std::cin >> v1[i];
	}
	
	int M;
	std::cin >> M;
	std::vector<int> v2(M);
	
	for (int i = 0; i < M; i++) {
		std::cin >> v2[i];
	}

	for (int i = 0; i < M; i++) {
		int count = 0;
		for (int j= 0; j < N; j++) {
			if (v1[j] == v2[i]) {
				count++;
			}
		}

		if (count > 0) {
			std::cout << 1 << " ";
		}
		else
			std::cout << 0 << " ";
	}

}