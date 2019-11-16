using namespace std;

#include <iostream>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int t, j, i, N;
	double max, min;
	cout << "Введите размер массива: ";
	cin >> N;
	int* A = new int[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < N; i++) {
		cin >> A[i];
	};
	max = A[0];
	min = A[0];
	for (i = 0; i < N; i++) {
		if (A[i] > max) { max = A[i]; }
		else if (A[i] < min) { min = A[i]; }
	};
	for (j = 0; j < N; j++) {
		if (A[j] == max) { A[j] = min; }
		else if (A[j] == min) { A[j] = max; };
	};
	cout << endl;
	cout << "Массив после перестановки максимального и минимального значений: " << endl;
	for (i = 0; i < N; i++) {
		cout << A[i]<< endl;
	};
}