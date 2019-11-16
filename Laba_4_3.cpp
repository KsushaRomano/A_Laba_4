#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, k, p;
	double b;
	cout << "Введите размер массива: ";
	cin >> N;
	double* A = new double[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < N; i++) {
		cin >> A[i];
	};
	cout << "Введите знпчение b: ";
	cin >> b;
	k = 0;
	for (i = 0; i < N; i++) {
		if (A[i] < b) {
			k++;
		};
	};
	p = 0;
	double* B = new double[N - k];
	for (i = 0; i < (N - k); i++) {
		if (A[p] >= b) {
			B[i] = A[p];
			p++;
		}
		else {
			p++;
			i--;
		};
	};
	cout << "Измененный массив: " << endl;
	for (i = 0; i < (N - k); i++) {
		cout << B[i] << endl;
	};
}