#include <iostream>
// із заданою точністю визначити значення математичної константи e=1+1/1!+1/2!+1/3!...

int main() {
	double n; // точність 
	int k = 1;
	double add = 1, add_0;
	double e = 2;
	std::cout << "Enter the accuracy (number of terms): ";
	std::cin >> n;
	do {
		k++;
		add_0 = add;
		add = add_0 / k;
		e += add;
	} while ((add_0 - add) >= n);
		std::cout << "e=" << e;
	return 0;
}