#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, k, p;
	double max, s;
	cout << "Введите размер массива: ";
	cin >> N;
	double* A = new double[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < N; i++) {
		cin >> A[i];
	};
	max = A[0];
	for (i = 0; i < N; i++) {
		if (A[i] > max) {
			max = A[i];
			k = i;
		};
	};
	s = 0;
	cout << "Измененный массив: " << endl;
	for (i = 0; i < N; i++) {
		if (A[i] < A[k]) {
			s += A[i];
		};
		if (A[i] == A[k]) {
			A[i] = s;
		};
		cout << A[i] << endl;
	};
}