#include <iostream>

using namespace std;

int main()
{
	int liczba = 0;
	bool zlozony = false;
	cout << "Wpisz liczbe\n";
	while (liczba < 2) {
		cin >> liczba;
	}
	for (unsigned int i = liczba/2; i > 1; i--) {
		if (liczba % i == 0) {
			zlozony = true;
			break;
		}
	}

	if (zlozony) {
		cout << "Liczba jest zlozona";
	}
	else {
		cout << "Liczba jest pierwsza";
	}
}
