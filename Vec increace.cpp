#include <iostream>
#include <vector>

void increase(std::vector<int>& vec, int n) {
	for (int i = 0; i < vec.size(); i++) {
		vec[i] += n;
	}
}

int main() {
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	increase(v, 5);
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << " ";
	}
}