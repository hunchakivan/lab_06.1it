#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High) {
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size) {
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

int Sum(int* a, const int size) {
	int S = 0;
	for (int i = 0; i < size; i++)
		if (a[i] > 0 && a[i] % 2 == 0)
			S += a[i];
	return S;
}

int Quantity(int* a, const int size) {
	int Q = 0;
	for (int i = 0; i < size; i++)
		if (a[i] == 0)
			Q += 1;
	return Q;
}

int Change(int* a, const int size) {
	for (int i = 0; i < size; i++)
		if (a[i] > 0 && a[i] % 2 == 0)
			a[i] = 0;
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
	return 0;
	}

int main() {
	srand((unsigned)time(NULL));
	const int n = 25;
	int a[n];
	int Low = -20;
	int High = 30;
	Create(a, n, Low, High);
	Print(a, n);
	cout << "S = " << Sum(a, n) << endl;
	Change(a, n);
	cout << "Q = " << Quantity(a, n) << endl;
	return 0;
}